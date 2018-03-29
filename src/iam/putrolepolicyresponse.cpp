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

#include "putrolepolicyresponse.h"
#include "putrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  PutRolePolicyResponse
 *
 * @brief  Handles IAM PutRolePolicy responses.
 *
 * @see    IAMClient::putRolePolicy
 */

/**
 * @brief  Constructs a new PutRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRolePolicyResponse::PutRolePolicyResponse(
        const PutRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new PutRolePolicyResponsePrivate(this), parent)
{
    setRequest(new PutRolePolicyRequest(request));
    setReply(reply);
}

const PutRolePolicyRequest * PutRolePolicyResponse::request() const
{
    Q_D(const PutRolePolicyResponse);
    return static_cast<const PutRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM PutRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void PutRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRolePolicyResponsePrivate
 *
 * @brief  Private implementation for PutRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRolePolicyResponse instance.
 */
PutRolePolicyResponsePrivate::PutRolePolicyResponsePrivate(
    PutRolePolicyQueueResponse * const q) : PutRolePolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM PutRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRolePolicyResponsePrivate::PutRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
