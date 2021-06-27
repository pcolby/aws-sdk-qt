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

#include "listthemesresponse.h"
#include "listthemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemesResponse
 * \brief The ListThemesResponse class provides an interace for QuickSight ListThemes responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemes
 */

/*!
 * Constructs a ListThemesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemesResponse::ListThemesResponse(
        const ListThemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListThemesResponsePrivate(this), parent)
{
    setRequest(new ListThemesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemesRequest * ListThemesResponse::request() const
{
    return static_cast<const ListThemesRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight ListThemes \a response.
 */
void ListThemesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListThemesResponsePrivate
 * \brief The ListThemesResponsePrivate class provides private implementation for ListThemesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemesResponsePrivate object with public implementation \a q.
 */
ListThemesResponsePrivate::ListThemesResponsePrivate(
    ListThemesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListThemes response element from \a xml.
 */
void ListThemesResponsePrivate::parseListThemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
