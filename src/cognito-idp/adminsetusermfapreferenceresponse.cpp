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

#include "adminsetusermfapreferenceresponse.h"
#include "adminsetusermfapreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminSetUserMFAPreferenceResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminSetUserMFAPreference responses.
 *
 * @see    CognitoIdentityProviderClient::adminSetUserMFAPreference
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminSetUserMFAPreferenceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminSetUserMFAPreferenceResponsePrivate(this), parent)
{
    setRequest(new AdminSetUserMFAPreferenceRequest(request));
    setReply(reply);
}

const AdminSetUserMFAPreferenceRequest * AdminSetUserMFAPreferenceResponse::request() const
{
    Q_D(const AdminSetUserMFAPreferenceResponse);
    return static_cast<const AdminSetUserMFAPreferenceRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminSetUserMFAPreference response.
 *
 * @param  response  Response to parse.
 */
void AdminSetUserMFAPreferenceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminSetUserMFAPreferenceResponsePrivate
 *
 * @brief  Private implementation for AdminSetUserMFAPreferenceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminSetUserMFAPreferenceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminSetUserMFAPreferenceResponse instance.
 */
AdminSetUserMFAPreferenceResponsePrivate::AdminSetUserMFAPreferenceResponsePrivate(
    AdminSetUserMFAPreferenceQueueResponse * const q) : AdminSetUserMFAPreferencePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminSetUserMFAPreferenceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminSetUserMFAPreferenceResponsePrivate::AdminSetUserMFAPreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminSetUserMFAPreferenceResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
