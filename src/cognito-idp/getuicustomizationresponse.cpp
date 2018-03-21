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

#include "getuicustomizationresponse.h"
#include "getuicustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetUICustomizationResponse
 *
 * @brief  Handles CognitoIdentityProvider GetUICustomization responses.
 *
 * @see    CognitoIdentityProviderClient::getUICustomization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUICustomizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUICustomizationResponsePrivate(this), parent)
{
    setRequest(new GetUICustomizationRequest(request));
    setReply(reply);
}

const GetUICustomizationRequest * GetUICustomizationResponse::request() const
{
    Q_D(const GetUICustomizationResponse);
    return static_cast<const GetUICustomizationRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider GetUICustomization response.
 *
 * @param  response  Response to parse.
 */
void GetUICustomizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUICustomizationResponsePrivate
 *
 * @brief  Private implementation for GetUICustomizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUICustomizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUICustomizationResponse instance.
 */
GetUICustomizationResponsePrivate::GetUICustomizationResponsePrivate(
    GetUICustomizationQueueResponse * const q) : GetUICustomizationPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider GetUICustomizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUICustomizationResponsePrivate::GetUICustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUICustomizationResponse"));
    /// @todo
}
