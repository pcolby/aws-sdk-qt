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

#include "listnotebookexecutionsresponse.h"
#include "listnotebookexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListNotebookExecutionsResponse
 * \brief The ListNotebookExecutionsResponse class provides an interace for EMR ListNotebookExecutions responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
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
    return static_cast<const ListNotebookExecutionsRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR ListNotebookExecutions \a response.
 */
void ListNotebookExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNotebookExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListNotebookExecutionsResponsePrivate
 * \brief The ListNotebookExecutionsResponsePrivate class provides private implementation for ListNotebookExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListNotebookExecutionsResponsePrivate object with public implementation \a q.
 */
ListNotebookExecutionsResponsePrivate::ListNotebookExecutionsResponsePrivate(
    ListNotebookExecutionsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListNotebookExecutions response element from \a xml.
 */
void ListNotebookExecutionsResponsePrivate::parseListNotebookExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
