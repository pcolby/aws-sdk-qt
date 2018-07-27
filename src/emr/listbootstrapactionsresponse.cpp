/*
    Copyright 2013-2018 Paul Colby

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

#include "listbootstrapactionsresponse.h"
#include "listbootstrapactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListBootstrapActionsResponse
 * \brief The ListBootstrapActionsResponse class provides an interace for EMR ListBootstrapActions responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listBootstrapActions
 */

/*!
 * Constructs a ListBootstrapActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBootstrapActionsResponse::ListBootstrapActionsResponse(
        const ListBootstrapActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListBootstrapActionsResponsePrivate(this), parent)
{
    setRequest(new ListBootstrapActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBootstrapActionsRequest * ListBootstrapActionsResponse::request() const
{
    Q_D(const ListBootstrapActionsResponse);
    return static_cast<const ListBootstrapActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ListBootstrapActions \a response.
 */
void ListBootstrapActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBootstrapActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListBootstrapActionsResponsePrivate
 * \brief The ListBootstrapActionsResponsePrivate class provides private implementation for ListBootstrapActionsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListBootstrapActionsResponsePrivate object with public implementation \a q.
 */
ListBootstrapActionsResponsePrivate::ListBootstrapActionsResponsePrivate(
    ListBootstrapActionsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListBootstrapActions response element from \a xml.
 */
void ListBootstrapActionsResponsePrivate::parseListBootstrapActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBootstrapActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
