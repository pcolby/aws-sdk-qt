// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchquantumtasksresponse.h"
#include "searchquantumtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchQuantumTasksResponse
 * \brief The SearchQuantumTasksResponse class provides an interace for Braket SearchQuantumTasks responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::searchQuantumTasks
 */

/*!
 * Constructs a SearchQuantumTasksResponse object for \a reply to \a request, with parent \a parent.
 */
SearchQuantumTasksResponse::SearchQuantumTasksResponse(
        const SearchQuantumTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new SearchQuantumTasksResponsePrivate(this), parent)
{
    setRequest(new SearchQuantumTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchQuantumTasksRequest * SearchQuantumTasksResponse::request() const
{
    Q_D(const SearchQuantumTasksResponse);
    return static_cast<const SearchQuantumTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket SearchQuantumTasks \a response.
 */
void SearchQuantumTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchQuantumTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::SearchQuantumTasksResponsePrivate
 * \brief The SearchQuantumTasksResponsePrivate class provides private implementation for SearchQuantumTasksResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchQuantumTasksResponsePrivate object with public implementation \a q.
 */
SearchQuantumTasksResponsePrivate::SearchQuantumTasksResponsePrivate(
    SearchQuantumTasksResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket SearchQuantumTasks response element from \a xml.
 */
void SearchQuantumTasksResponsePrivate::parseSearchQuantumTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchQuantumTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
