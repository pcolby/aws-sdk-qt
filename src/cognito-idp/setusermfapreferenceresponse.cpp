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

#include "setusermfapreferenceresponse.h"
#include "setusermfapreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserMFAPreferenceResponse
 *
 * @brief  Handles CognitoIdentityProvider SetUserMFAPreference responses.
 *
 * @see    CognitoIdentityProviderClient::setUserMFAPreference
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUserMFAPreferenceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserMFAPreferenceResponsePrivate(this), parent)
{
    setRequest(new SetUserMFAPreferenceRequest(request));
    setReply(reply);
}

const SetUserMFAPreferenceRequest * SetUserMFAPreferenceResponse::request() const
{
    Q_D(const SetUserMFAPreferenceResponse);
    return static_cast<const SetUserMFAPreferenceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider SetUserMFAPreference response.
 *
 * @param  response  Response to parse.
 */
void SetUserMFAPreferenceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetUserMFAPreferenceResponsePrivate
 *
 * @brief  Private implementation for SetUserMFAPreferenceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserMFAPreferenceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetUserMFAPreferenceResponse instance.
 */
SetUserMFAPreferenceResponsePrivate::SetUserMFAPreferenceResponsePrivate(
    SetUserMFAPreferenceQueueResponse * const q) : SetUserMFAPreferencePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider SetUserMFAPreferenceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetUserMFAPreferenceResponsePrivate::SetUserMFAPreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserMFAPreferenceResponse"));
    /// @todo
}
