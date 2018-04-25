/*
    Copyright 2013-2018 Paul Colby

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

#include "createvpcassociationauthorizationresponse.h"
#include "createvpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationResponse
 * \brief The CreateVPCAssociationAuthorizationResponse class provides an interace for Route53 CreateVPCAssociationAuthorization responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createVPCAssociationAuthorization
 */

/*!
 * Constructs a CreateVPCAssociationAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVPCAssociationAuthorizationResponse::CreateVPCAssociationAuthorizationResponse(
        const CreateVPCAssociationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateVPCAssociationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new CreateVPCAssociationAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVPCAssociationAuthorizationRequest * CreateVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const CreateVPCAssociationAuthorizationResponse);
    return static_cast<const CreateVPCAssociationAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateVPCAssociationAuthorization \a response.
 */
void CreateVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVPCAssociationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationResponsePrivate
 * \brief The CreateVPCAssociationAuthorizationResponsePrivate class provides private implementation for CreateVPCAssociationAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateVPCAssociationAuthorizationResponsePrivate object with public implementation \a q.
 */
CreateVPCAssociationAuthorizationResponsePrivate::CreateVPCAssociationAuthorizationResponsePrivate(
    CreateVPCAssociationAuthorizationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateVPCAssociationAuthorization response element from \a xml.
 */
void CreateVPCAssociationAuthorizationResponsePrivate::parseCreateVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVPCAssociationAuthorizationResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
