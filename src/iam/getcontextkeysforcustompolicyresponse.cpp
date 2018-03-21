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

#include "getcontextkeysforcustompolicyresponse.h"
#include "getcontextkeysforcustompolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetContextKeysForCustomPolicyResponse
 *
 * @brief  Handles IAM GetContextKeysForCustomPolicy responses.
 *
 * @see    IAMClient::getContextKeysForCustomPolicy
 */

/**
 * @brief  Constructs a new GetContextKeysForCustomPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetContextKeysForCustomPolicyResponse::GetContextKeysForCustomPolicyResponse(
        const GetContextKeysForCustomPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetContextKeysForCustomPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContextKeysForCustomPolicyRequest(request));
    setReply(reply);
}

const GetContextKeysForCustomPolicyRequest * GetContextKeysForCustomPolicyResponse::request() const
{
    Q_D(const GetContextKeysForCustomPolicyResponse);
    return static_cast<const GetContextKeysForCustomPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetContextKeysForCustomPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetContextKeysForCustomPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetContextKeysForCustomPolicyResponsePrivate
 *
 * @brief  Private implementation for GetContextKeysForCustomPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForCustomPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetContextKeysForCustomPolicyResponse instance.
 */
GetContextKeysForCustomPolicyResponsePrivate::GetContextKeysForCustomPolicyResponsePrivate(
    GetContextKeysForCustomPolicyQueueResponse * const q) : GetContextKeysForCustomPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetContextKeysForCustomPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetContextKeysForCustomPolicyResponsePrivate::GetContextKeysForCustomPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContextKeysForCustomPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
