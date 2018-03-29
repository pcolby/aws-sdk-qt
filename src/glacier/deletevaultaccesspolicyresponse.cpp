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

#include "deletevaultaccesspolicyresponse.h"
#include "deletevaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  DeleteVaultAccessPolicyResponse
 *
 * @brief  Handles Glacier DeleteVaultAccessPolicy responses.
 *
 * @see    GlacierClient::deleteVaultAccessPolicy
 */

/**
 * @brief  Constructs a new DeleteVaultAccessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVaultAccessPolicyResponse::DeleteVaultAccessPolicyResponse(
        const DeleteVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DeleteVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteVaultAccessPolicyRequest(request));
    setReply(reply);
}

const DeleteVaultAccessPolicyRequest * DeleteVaultAccessPolicyResponse::request() const
{
    Q_D(const DeleteVaultAccessPolicyResponse);
    return static_cast<const DeleteVaultAccessPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier DeleteVaultAccessPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVaultAccessPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteVaultAccessPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultAccessPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVaultAccessPolicyResponse instance.
 */
DeleteVaultAccessPolicyResponsePrivate::DeleteVaultAccessPolicyResponsePrivate(
    DeleteVaultAccessPolicyQueueResponse * const q) : DeleteVaultAccessPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Glacier DeleteVaultAccessPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVaultAccessPolicyResponsePrivate::DeleteVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVaultAccessPolicyResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
