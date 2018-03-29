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

#include "getcontextkeysforprincipalpolicyresponse.h"
#include "getcontextkeysforprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetContextKeysForPrincipalPolicyResponse
 *
 * @brief  Handles IAM GetContextKeysForPrincipalPolicy responses.
 *
 * @see    IAMClient::getContextKeysForPrincipalPolicy
 */

/**
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetContextKeysForPrincipalPolicyResponse::GetContextKeysForPrincipalPolicyResponse(
        const GetContextKeysForPrincipalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetContextKeysForPrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContextKeysForPrincipalPolicyRequest(request));
    setReply(reply);
}

const GetContextKeysForPrincipalPolicyRequest * GetContextKeysForPrincipalPolicyResponse::request() const
{
    Q_D(const GetContextKeysForPrincipalPolicyResponse);
    return static_cast<const GetContextKeysForPrincipalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetContextKeysForPrincipalPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetContextKeysForPrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetContextKeysForPrincipalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetContextKeysForPrincipalPolicyResponsePrivate
 *
 * @brief  Private implementation for GetContextKeysForPrincipalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetContextKeysForPrincipalPolicyResponse instance.
 */
GetContextKeysForPrincipalPolicyResponsePrivate::GetContextKeysForPrincipalPolicyResponsePrivate(
    GetContextKeysForPrincipalPolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetContextKeysForPrincipalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetContextKeysForPrincipalPolicyResponsePrivate::parseGetContextKeysForPrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContextKeysForPrincipalPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
