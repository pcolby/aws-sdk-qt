/*
    Copyright 2013-2019 Paul Colby

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

#include "modifymounttargetsecuritygroupsresponse.h"
#include "modifymounttargetsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::ModifyMountTargetSecurityGroupsResponse
 * \brief The ModifyMountTargetSecurityGroupsResponse class provides an interace for EFS ModifyMountTargetSecurityGroups responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::modifyMountTargetSecurityGroups
 */

/*!
 * Constructs a ModifyMountTargetSecurityGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyMountTargetSecurityGroupsResponse::ModifyMountTargetSecurityGroupsResponse(
        const ModifyMountTargetSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new ModifyMountTargetSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new ModifyMountTargetSecurityGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyMountTargetSecurityGroupsRequest * ModifyMountTargetSecurityGroupsResponse::request() const
{
    Q_D(const ModifyMountTargetSecurityGroupsResponse);
    return static_cast<const ModifyMountTargetSecurityGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EFS ModifyMountTargetSecurityGroups \a response.
 */
void ModifyMountTargetSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyMountTargetSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::ModifyMountTargetSecurityGroupsResponsePrivate
 * \brief The ModifyMountTargetSecurityGroupsResponsePrivate class provides private implementation for ModifyMountTargetSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a ModifyMountTargetSecurityGroupsResponsePrivate object with public implementation \a q.
 */
ModifyMountTargetSecurityGroupsResponsePrivate::ModifyMountTargetSecurityGroupsResponsePrivate(
    ModifyMountTargetSecurityGroupsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS ModifyMountTargetSecurityGroups response element from \a xml.
 */
void ModifyMountTargetSecurityGroupsResponsePrivate::parseModifyMountTargetSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyMountTargetSecurityGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
