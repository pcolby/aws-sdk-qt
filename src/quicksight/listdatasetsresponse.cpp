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

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDataSetsResponse
 * \brief The ListDataSetsResponse class provides an interace for QuickSight ListDataSets responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDataSets
 */

/*!
 * Constructs a ListDataSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSetsResponse::ListDataSetsResponse(
        const ListDataSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListDataSetsResponsePrivate(this), parent)
{
    setRequest(new ListDataSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSetsRequest * ListDataSetsResponse::request() const
{
    return static_cast<const ListDataSetsRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight ListDataSets \a response.
 */
void ListDataSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListDataSetsResponsePrivate
 * \brief The ListDataSetsResponsePrivate class provides private implementation for ListDataSetsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDataSetsResponsePrivate object with public implementation \a q.
 */
ListDataSetsResponsePrivate::ListDataSetsResponsePrivate(
    ListDataSetsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListDataSets response element from \a xml.
 */
void ListDataSetsResponsePrivate::parseListDataSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
