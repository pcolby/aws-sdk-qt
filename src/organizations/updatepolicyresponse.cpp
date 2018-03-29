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

#include "updatepolicyresponse.h"
#include "updatepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  UpdatePolicyResponse
 *
 * @brief  Handles Organizations UpdatePolicy responses.
 *
 * @see    OrganizationsClient::updatePolicy
 */

/**
 * @brief  Constructs a new UpdatePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePolicyResponse::UpdatePolicyResponse(
        const UpdatePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new UpdatePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdatePolicyRequest(request));
    setReply(reply);
}

const UpdatePolicyRequest * UpdatePolicyResponse::request() const
{
    Q_D(const UpdatePolicyResponse);
    return static_cast<const UpdatePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations UpdatePolicy response.
 *
 * @param  response  Response to parse.
 */
void UpdatePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePolicyResponsePrivate
 *
 * @brief  Private implementation for UpdatePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePolicyResponse instance.
 */
UpdatePolicyResponsePrivate::UpdatePolicyResponsePrivate(
    UpdatePolicyQueueResponse * const q) : UpdatePolicyPrivate(q)
{

}

/**
 * @brief  Parse an Organizations UpdatePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePolicyResponsePrivate::UpdatePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePolicyResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
