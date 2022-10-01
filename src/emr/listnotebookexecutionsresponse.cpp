// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotebookexecutionsresponse.h"
#include "listnotebookexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListNotebookExecutionsResponse
 * \brief The ListNotebookExecutionsResponse class provides an interace for Emr ListNotebookExecutions responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listNotebookExecutions
 */

/*!
 * Constructs a ListNotebookExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNotebookExecutionsResponse::ListNotebookExecutionsResponse(
        const ListNotebookExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListNotebookExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListNotebookExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNotebookExecutionsRequest * ListNotebookExecutionsResponse::request() const
{
    Q_D(const ListNotebookExecutionsResponse);
    return static_cast<const ListNotebookExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListNotebookExecutions \a response.
 */
void ListNotebookExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNotebookExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListNotebookExecutionsResponsePrivate
 * \brief The ListNotebookExecutionsResponsePrivate class provides private implementation for ListNotebookExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListNotebookExecutionsResponsePrivate object with public implementation \a q.
 */
ListNotebookExecutionsResponsePrivate::ListNotebookExecutionsResponsePrivate(
    ListNotebookExecutionsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListNotebookExecutions response element from \a xml.
 */
void ListNotebookExecutionsResponsePrivate::parseListNotebookExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
