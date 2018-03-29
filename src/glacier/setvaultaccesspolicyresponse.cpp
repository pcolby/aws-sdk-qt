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

#include "setvaultaccesspolicyresponse.h"
#include "setvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  SetVaultAccessPolicyResponse
 *
 * @brief  Handles Glacier SetVaultAccessPolicy responses.
 *
 * @see    GlacierClient::setVaultAccessPolicy
 */

/**
 * @brief  Constructs a new SetVaultAccessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetVaultAccessPolicyResponse::SetVaultAccessPolicyResponse(
        const SetVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new SetVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new SetVaultAccessPolicyRequest(request));
    setReply(reply);
}

const SetVaultAccessPolicyRequest * SetVaultAccessPolicyResponse::request() const
{
    Q_D(const SetVaultAccessPolicyResponse);
    return static_cast<const SetVaultAccessPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier SetVaultAccessPolicy response.
 *
 * @param  response  Response to parse.
 */
void SetVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetVaultAccessPolicyResponsePrivate
 *
 * @brief  Private implementation for SetVaultAccessPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultAccessPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetVaultAccessPolicyResponse instance.
 */
SetVaultAccessPolicyResponsePrivate::SetVaultAccessPolicyResponsePrivate(
    SetVaultAccessPolicyQueueResponse * const q) : SetVaultAccessPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Glacier SetVaultAccessPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetVaultAccessPolicyResponsePrivate::SetVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetVaultAccessPolicyResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
