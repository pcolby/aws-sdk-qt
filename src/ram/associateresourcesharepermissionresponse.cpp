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
namespace Ram {

/*!
 * \class QtAws::Ram::AssociateResourceSharePermissionResponse
 * \brief The AssociateResourceSharePermissionResponse class provides an interace for Ram AssociateResourceSharePermission responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
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
    Q_D(const AssociateResourceSharePermissionResponse);
    return static_cast<const AssociateResourceSharePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram AssociateResourceSharePermission \a response.
 */
void AssociateResourceSharePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceSharePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::AssociateResourceSharePermissionResponsePrivate
 * \brief The AssociateResourceSharePermissionResponsePrivate class provides private implementation for AssociateResourceSharePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a AssociateResourceSharePermissionResponsePrivate object with public implementation \a q.
 */
AssociateResourceSharePermissionResponsePrivate::AssociateResourceSharePermissionResponsePrivate(
    AssociateResourceSharePermissionResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram AssociateResourceSharePermission response element from \a xml.
 */
void AssociateResourceSharePermissionResponsePrivate::parseAssociateResourceSharePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceSharePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
