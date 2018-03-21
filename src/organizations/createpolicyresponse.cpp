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

#include "createpolicyresponse.h"
#include "createpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  CreatePolicyResponse
 *
 * @brief  Handles Organizations CreatePolicy responses.
 *
 * @see    OrganizationsClient::createPolicy
 */

/**
 * @brief  Constructs a new CreatePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePolicyResponse::CreatePolicyResponse(
        const CreatePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new CreatePolicyResponsePrivate(this), parent)
{
    setRequest(new CreatePolicyRequest(request));
    setReply(reply);
}

const CreatePolicyRequest * CreatePolicyResponse::request() const
{
    Q_D(const CreatePolicyResponse);
    return static_cast<const CreatePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations CreatePolicy response.
 *
 * @param  response  Response to parse.
 */
void CreatePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePolicyResponsePrivate
 *
 * @brief  Private implementation for CreatePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePolicyResponse instance.
 */
CreatePolicyResponsePrivate::CreatePolicyResponsePrivate(
    CreatePolicyQueueResponse * const q) : CreatePolicyPrivate(q)
{

}

/**
 * @brief  Parse an Organizations CreatePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePolicyResponsePrivate::CreatePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePolicyResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
