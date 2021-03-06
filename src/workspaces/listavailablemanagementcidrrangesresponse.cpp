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

#include "listavailablemanagementcidrrangesresponse.h"
#include "listavailablemanagementcidrrangesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ListAvailableManagementCidrRangesResponse
 * \brief The ListAvailableManagementCidrRangesResponse class provides an interace for WorkSpaces ListAvailableManagementCidrRanges responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::listAvailableManagementCidrRanges
 */

/*!
 * Constructs a ListAvailableManagementCidrRangesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAvailableManagementCidrRangesResponse::ListAvailableManagementCidrRangesResponse(
        const ListAvailableManagementCidrRangesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ListAvailableManagementCidrRangesResponsePrivate(this), parent)
{
    setRequest(new ListAvailableManagementCidrRangesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAvailableManagementCidrRangesRequest * ListAvailableManagementCidrRangesResponse::request() const
{
    Q_D(const ListAvailableManagementCidrRangesResponse);
    return static_cast<const ListAvailableManagementCidrRangesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ListAvailableManagementCidrRanges \a response.
 */
void ListAvailableManagementCidrRangesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAvailableManagementCidrRangesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ListAvailableManagementCidrRangesResponsePrivate
 * \brief The ListAvailableManagementCidrRangesResponsePrivate class provides private implementation for ListAvailableManagementCidrRangesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ListAvailableManagementCidrRangesResponsePrivate object with public implementation \a q.
 */
ListAvailableManagementCidrRangesResponsePrivate::ListAvailableManagementCidrRangesResponsePrivate(
    ListAvailableManagementCidrRangesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ListAvailableManagementCidrRanges response element from \a xml.
 */
void ListAvailableManagementCidrRangesResponsePrivate::parseListAvailableManagementCidrRangesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableManagementCidrRangesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
