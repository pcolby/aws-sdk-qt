/*
    Copyright 2013-2020 Paul Colby

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

#include "getgroupsresponse.h"
#include "getgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupsResponse
 * \brief The GetGroupsResponse class provides an interace for XRay GetGroups responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getGroups
 */

/*!
 * Constructs a GetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupsResponse::GetGroupsResponse(
        const GetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetGroupsResponsePrivate(this), parent)
{
    setRequest(new GetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupsRequest * GetGroupsResponse::request() const
{
    Q_D(const GetGroupsResponse);
    return static_cast<const GetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetGroups \a response.
 */
void GetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetGroupsResponsePrivate
 * \brief The GetGroupsResponsePrivate class provides private implementation for GetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupsResponsePrivate object with public implementation \a q.
 */
GetGroupsResponsePrivate::GetGroupsResponsePrivate(
    GetGroupsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetGroups response element from \a xml.
 */
void GetGroupsResponsePrivate::parseGetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
