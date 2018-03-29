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

#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  GetLifecyclePolicyResponse
 *
 * @brief  Handles ECR GetLifecyclePolicy responses.
 *
 * @see    ECRClient::getLifecyclePolicy
 */

/**
 * @brief  Constructs a new GetLifecyclePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLifecyclePolicyResponse::GetLifecyclePolicyResponse(
        const GetLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePolicyRequest(request));
    setReply(reply);
}

const GetLifecyclePolicyRequest * GetLifecyclePolicyResponse::request() const
{
    Q_D(const GetLifecyclePolicyResponse);
    return static_cast<const GetLifecyclePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR GetLifecyclePolicy response.
 *
 * @param  response  Response to parse.
 */
void GetLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLifecyclePolicyResponsePrivate
 *
 * @brief  Private implementation for GetLifecyclePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLifecyclePolicyResponse instance.
 */
GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponsePrivate(
    GetLifecyclePolicyResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR GetLifecyclePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
