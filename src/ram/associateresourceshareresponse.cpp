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

#include "associateresourceshareresponse.h"
#include "associateresourceshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::AssociateResourceShareResponse
 * \brief The AssociateResourceShareResponse class provides an interace for RAM AssociateResourceShare responses.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 *
 * \sa RamClient::associateResourceShare
 */

/*!
 * Constructs a AssociateResourceShareResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceShareResponse::AssociateResourceShareResponse(
        const AssociateResourceShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new AssociateResourceShareResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceShareRequest * AssociateResourceShareResponse::request() const
{
    Q_D(const AssociateResourceShareResponse);
    return static_cast<const AssociateResourceShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RAM AssociateResourceShare \a response.
 */
void AssociateResourceShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RAM::AssociateResourceShareResponsePrivate
 * \brief The AssociateResourceShareResponsePrivate class provides private implementation for AssociateResourceShareResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a AssociateResourceShareResponsePrivate object with public implementation \a q.
 */
AssociateResourceShareResponsePrivate::AssociateResourceShareResponsePrivate(
    AssociateResourceShareResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a RAM AssociateResourceShare response element from \a xml.
 */
void AssociateResourceShareResponsePrivate::parseAssociateResourceShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RAM
} // namespace QtAws
