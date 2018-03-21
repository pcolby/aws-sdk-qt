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

#include "deletepolicyversionresponse.h"
#include "deletepolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeletePolicyVersionResponse
 *
 * @brief  Handles IAM DeletePolicyVersion responses.
 *
 * @see    IAMClient::deletePolicyVersion
 */

/**
 * @brief  Constructs a new DeletePolicyVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePolicyVersionResponse::DeletePolicyVersionResponse(
        const DeletePolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeletePolicyVersionResponsePrivate(this), parent)
{
    setRequest(new DeletePolicyVersionRequest(request));
    setReply(reply);
}

const DeletePolicyVersionRequest * DeletePolicyVersionResponse::request() const
{
    Q_D(const DeletePolicyVersionResponse);
    return static_cast<const DeletePolicyVersionRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeletePolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void DeletePolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePolicyVersionResponsePrivate
 *
 * @brief  Private implementation for DeletePolicyVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePolicyVersionResponse instance.
 */
DeletePolicyVersionResponsePrivate::DeletePolicyVersionResponsePrivate(
    DeletePolicyVersionQueueResponse * const q) : DeletePolicyVersionPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeletePolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePolicyVersionResponsePrivate::DeletePolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePolicyVersionResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
