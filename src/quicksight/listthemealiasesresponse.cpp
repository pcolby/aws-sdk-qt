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

#include "listthemealiasesresponse.h"
#include "listthemealiasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemeAliasesResponse
 * \brief The ListThemeAliasesResponse class provides an interace for QuickSight ListThemeAliases responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemeAliases
 */

/*!
 * Constructs a ListThemeAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemeAliasesResponse::ListThemeAliasesResponse(
        const ListThemeAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListThemeAliasesResponsePrivate(this), parent)
{
    setRequest(new ListThemeAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemeAliasesRequest * ListThemeAliasesResponse::request() const
{
    Q_D(const ListThemeAliasesResponse);
    return static_cast<const ListThemeAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListThemeAliases \a response.
 */
void ListThemeAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemeAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListThemeAliasesResponsePrivate
 * \brief The ListThemeAliasesResponsePrivate class provides private implementation for ListThemeAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemeAliasesResponsePrivate object with public implementation \a q.
 */
ListThemeAliasesResponsePrivate::ListThemeAliasesResponsePrivate(
    ListThemeAliasesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListThemeAliases response element from \a xml.
 */
void ListThemeAliasesResponsePrivate::parseListThemeAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemeAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
