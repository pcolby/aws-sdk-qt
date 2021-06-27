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

#include "associateresourcesharepermissionresponse.h"
#include "associateresourcesharepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::AssociateResourceSharePermissionResponse
 * \brief The AssociateResourceSharePermissionResponse class provides an interace for RAM AssociateResourceSharePermission responses.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resources
 *  associated with the resource share. The following principals are supported: AWS accounts, organizational units (OU) from
 *  AWS Organizations, and organizations from AWS
 * 
 *  Organizations>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/ram/latest/userguide/">AWS Resource Access Manager
 *  User
 *
 * \sa RamClient::associateResourceSharePermission
 */

/*!
 * Constructs a AssociateResourceSharePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceSharePermissionResponse::AssociateResourceSharePermissionResponse(
        const AssociateResourceSharePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new AssociateResourceSharePermissionResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceSharePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceSharePermissionRequest * AssociateResourceSharePermissionResponse::request() const
{
    return static_cast<const AssociateResourceSharePermissionRequest *>(RamResponse::request());
}

/*!
 * \reimp
 * Parses a successful RAM AssociateResourceSharePermission \a response.
 */
void AssociateResourceSharePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceSharePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RAM::AssociateResourceSharePermissionResponsePrivate
 * \brief The AssociateResourceSharePermissionResponsePrivate class provides private implementation for AssociateResourceSharePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a AssociateResourceSharePermissionResponsePrivate object with public implementation \a q.
 */
AssociateResourceSharePermissionResponsePrivate::AssociateResourceSharePermissionResponsePrivate(
    AssociateResourceSharePermissionResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a RAM AssociateResourceSharePermission response element from \a xml.
 */
void AssociateResourceSharePermissionResponsePrivate::parseAssociateResourceSharePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceSharePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RAM
} // namespace QtAws
