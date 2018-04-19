/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevpcassociationauthorizationresponse.h"
#include "deletevpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationResponse
 * \brief The DeleteVPCAssociationAuthorizationResponse class provides an interace for Route53 DeleteVPCAssociationAuthorization responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteVPCAssociationAuthorization
 */

/*!
 * Constructs a DeleteVPCAssociationAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVPCAssociationAuthorizationResponse::DeleteVPCAssociationAuthorizationResponse(
        const DeleteVPCAssociationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteVPCAssociationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteVPCAssociationAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVPCAssociationAuthorizationRequest * DeleteVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const DeleteVPCAssociationAuthorizationResponse);
    return static_cast<const DeleteVPCAssociationAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteVPCAssociationAuthorization \a response.
 */
void DeleteVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVPCAssociationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationResponsePrivate
 * \brief The DeleteVPCAssociationAuthorizationResponsePrivate class provides private implementation for DeleteVPCAssociationAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteVPCAssociationAuthorizationResponsePrivate object with public implementation \a q.
 */
DeleteVPCAssociationAuthorizationResponsePrivate::DeleteVPCAssociationAuthorizationResponsePrivate(
    DeleteVPCAssociationAuthorizationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteVPCAssociationAuthorization response element from \a xml.
 */
void DeleteVPCAssociationAuthorizationResponsePrivate::parseDeleteVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVPCAssociationAuthorizationResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
