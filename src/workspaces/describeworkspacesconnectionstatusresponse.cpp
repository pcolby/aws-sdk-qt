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

#include "describeworkspacesconnectionstatusresponse.h"
#include "describeworkspacesconnectionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesConnectionStatusResponse
 * \brief The DescribeWorkspacesConnectionStatusResponse class provides an interace for WorkSpaces DescribeWorkspacesConnectionStatus responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspacesConnectionStatus
 */

/*!
 * Constructs a DescribeWorkspacesConnectionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspacesConnectionStatusResponse::DescribeWorkspacesConnectionStatusResponse(
        const DescribeWorkspacesConnectionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspacesConnectionStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspacesConnectionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspacesConnectionStatusRequest * DescribeWorkspacesConnectionStatusResponse::request() const
{
    Q_D(const DescribeWorkspacesConnectionStatusResponse);
    return static_cast<const DescribeWorkspacesConnectionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspacesConnectionStatus \a response.
 */
void DescribeWorkspacesConnectionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspacesConnectionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesConnectionStatusResponsePrivate
 * \brief The DescribeWorkspacesConnectionStatusResponsePrivate class provides private implementation for DescribeWorkspacesConnectionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspacesConnectionStatusResponsePrivate object with public implementation \a q.
 */
DescribeWorkspacesConnectionStatusResponsePrivate::DescribeWorkspacesConnectionStatusResponsePrivate(
    DescribeWorkspacesConnectionStatusResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspacesConnectionStatus response element from \a xml.
 */
void DescribeWorkspacesConnectionStatusResponsePrivate::parseDescribeWorkspacesConnectionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspacesConnectionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
