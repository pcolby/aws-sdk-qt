/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const SearchQuantumTasksRequest *>(BraketResponse::request());
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
