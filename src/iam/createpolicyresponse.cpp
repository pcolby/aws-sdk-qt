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

#include "createpolicyresponse.h"
#include "createpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  CreatePolicyResponse
 *
 * @brief  Handles IAM CreatePolicy responses.
 *
 * @see    IAMClient::createPolicy
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
    : CreatePolicyResponse(new CreatePolicyResponsePrivate(this), parent)
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
 * @brief  Parse a IAM CreatePolicy response.
 *
 * @param  response  Response to parse.
 */
void CreatePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePolicyResponse);
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
    CreatePolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreatePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePolicyResponsePrivate::parseCreatePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
