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

#include "getuserpolicyresponse.h"
#include "getuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetUserPolicyResponse
 *
 * @brief  Handles IAM GetUserPolicy responses.
 *
 * @see    IAMClient::getUserPolicy
 */

/**
 * @brief  Constructs a new GetUserPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserPolicyResponse::GetUserPolicyResponse(
        const GetUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetUserPolicyResponsePrivate(this), parent)
{
    setRequest(new GetUserPolicyRequest(request));
    setReply(reply);
}

const GetUserPolicyRequest * GetUserPolicyResponse::request() const
{
    Q_D(const GetUserPolicyResponse);
    return static_cast<const GetUserPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetUserPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetUserPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUserPolicyResponsePrivate
 *
 * @brief  Private implementation for GetUserPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUserPolicyResponse instance.
 */
GetUserPolicyResponsePrivate::GetUserPolicyResponsePrivate(
    GetUserPolicyQueueResponse * const q) : GetUserPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetUserPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUserPolicyResponsePrivate::GetUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
