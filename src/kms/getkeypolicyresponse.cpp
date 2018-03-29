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

#include "getkeypolicyresponse.h"
#include "getkeypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GetKeyPolicyResponse
 *
 * @brief  Handles KMS GetKeyPolicy responses.
 *
 * @see    KMSClient::getKeyPolicy
 */

/**
 * @brief  Constructs a new GetKeyPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyPolicyResponse::GetKeyPolicyResponse(
        const GetKeyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GetKeyPolicyResponsePrivate(this), parent)
{
    setRequest(new GetKeyPolicyRequest(request));
    setReply(reply);
}

const GetKeyPolicyRequest * GetKeyPolicyResponse::request() const
{
    Q_D(const GetKeyPolicyResponse);
    return static_cast<const GetKeyPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GetKeyPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetKeyPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetKeyPolicyResponsePrivate
 *
 * @brief  Private implementation for GetKeyPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetKeyPolicyResponse instance.
 */
GetKeyPolicyResponsePrivate::GetKeyPolicyResponsePrivate(
    GetKeyPolicyQueueResponse * const q) : GetKeyPolicyPrivate(q)
{

}

/**
 * @brief  Parse an KMS GetKeyPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetKeyPolicyResponsePrivate::GetKeyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyPolicyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
