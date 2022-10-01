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

#include "listingestionsresponse.h"
#include "listingestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIngestionsResponse
 * \brief The ListIngestionsResponse class provides an interace for QuickSight ListIngestions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIngestions
 */

/*!
 * Constructs a ListIngestionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIngestionsResponse::ListIngestionsResponse(
        const ListIngestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListIngestionsResponsePrivate(this), parent)
{
    setRequest(new ListIngestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIngestionsRequest * ListIngestionsResponse::request() const
{
    Q_D(const ListIngestionsResponse);
    return static_cast<const ListIngestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListIngestions \a response.
 */
void ListIngestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIngestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListIngestionsResponsePrivate
 * \brief The ListIngestionsResponsePrivate class provides private implementation for ListIngestionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIngestionsResponsePrivate object with public implementation \a q.
 */
ListIngestionsResponsePrivate::ListIngestionsResponsePrivate(
    ListIngestionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListIngestions response element from \a xml.
 */
void ListIngestionsResponsePrivate::parseListIngestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIngestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
