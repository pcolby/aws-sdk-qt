/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "setuicustomizationresponse.h"
#include "setuicustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  SetUICustomizationResponse
 *
 * @brief  Handles CognitoIdentityProvider SetUICustomization responses.
 *
 * @see    CognitoIdentityProviderClient::setUICustomization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUICustomizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUICustomizationResponsePrivate(this), parent)
{
    setRequest(new SetUICustomizationRequest(request));
    setReply(reply);
}

const SetUICustomizationRequest * SetUICustomizationResponse::request() const
{
    Q_D(const SetUICustomizationResponse);
    return static_cast<const SetUICustomizationRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider SetUICustomization response.
 *
 * @param  response  Response to parse.
 */
void SetUICustomizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetUICustomizationResponsePrivate
 *
 * @brief  Private implementation for SetUICustomizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUICustomizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetUICustomizationResponse instance.
 */
SetUICustomizationResponsePrivate::SetUICustomizationResponsePrivate(
    SetUICustomizationQueueResponse * const q) : SetUICustomizationPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider SetUICustomizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetUICustomizationResponsePrivate::SetUICustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUICustomizationResponse"));
    /// @todo
}
