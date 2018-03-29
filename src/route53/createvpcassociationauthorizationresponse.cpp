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

#include "createvpcassociationauthorizationresponse.h"
#include "createvpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateVPCAssociationAuthorizationResponse
 *
 * @brief  Handles Route53 CreateVPCAssociationAuthorization responses.
 *
 * @see    Route53Client::createVPCAssociationAuthorization
 */

/**
 * @brief  Constructs a new CreateVPCAssociationAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateVPCAssociationAuthorizationRequest * CreateVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const CreateVPCAssociationAuthorizationResponse);
    return static_cast<const CreateVPCAssociationAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateVPCAssociationAuthorization response.
 *
 * @param  response  Response to parse.
 */
void CreateVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVPCAssociationAuthorizationResponsePrivate
 *
 * @brief  Private implementation for CreateVPCAssociationAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVPCAssociationAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVPCAssociationAuthorizationResponse instance.
 */
CreateVPCAssociationAuthorizationResponsePrivate::CreateVPCAssociationAuthorizationResponsePrivate(
    CreateVPCAssociationAuthorizationQueueResponse * const q) : CreateVPCAssociationAuthorizationPrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateVPCAssociationAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVPCAssociationAuthorizationResponsePrivate::CreateVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVPCAssociationAuthorizationResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
