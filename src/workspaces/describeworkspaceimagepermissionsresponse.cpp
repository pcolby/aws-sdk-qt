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

#include "describeworkspaceimagepermissionsresponse.h"
#include "describeworkspaceimagepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagePermissionsResponse
 * \brief The DescribeWorkspaceImagePermissionsResponse class provides an interace for WorkSpaces DescribeWorkspaceImagePermissions responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for your
 *  users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to procure and deploy hardware or install complex
 *  software. You can quickly add or remove users as your needs change. Users can access their virtual desktops from
 *  multiple devices or web
 * 
 *  browsers>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the WorkSpaces
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Amazon WorkSpaces service, see <a href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces endpoints and
 *  quotas</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  You can also manage your WorkSpaces resources using the WorkSpaces console, Command Line Interface (CLI), and SDKs. For
 *  more information about administering WorkSpaces, see the <a
 *  href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon WorkSpaces Administration Guide</a>. For more
 *  information about using the Amazon WorkSpaces client application or web browser to access provisioned WorkSpaces, see
 *  the <a href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon WorkSpaces User Guide</a>. For more
 *  information about using the CLI to manage your WorkSpaces resources, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces section of the CLI
 *
 * \sa WorkSpacesClient::describeWorkspaceImagePermissions
 */

/*!
 * Constructs a DescribeWorkspaceImagePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceImagePermissionsResponse::DescribeWorkspaceImagePermissionsResponse(
        const DescribeWorkspaceImagePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceImagePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceImagePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceImagePermissionsRequest * DescribeWorkspaceImagePermissionsResponse::request() const
{
    Q_D(const DescribeWorkspaceImagePermissionsResponse);
    return static_cast<const DescribeWorkspaceImagePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeWorkspaceImagePermissions \a response.
 */
void DescribeWorkspaceImagePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceImagePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagePermissionsResponsePrivate
 * \brief The DescribeWorkspaceImagePermissionsResponsePrivate class provides private implementation for DescribeWorkspaceImagePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceImagePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceImagePermissionsResponsePrivate::DescribeWorkspaceImagePermissionsResponsePrivate(
    DescribeWorkspaceImagePermissionsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeWorkspaceImagePermissions response element from \a xml.
 */
void DescribeWorkspaceImagePermissionsResponsePrivate::parseDescribeWorkspaceImagePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceImagePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
