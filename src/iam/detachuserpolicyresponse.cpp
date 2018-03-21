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

#include "detachuserpolicyresponse.h"
#include "detachuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DetachUserPolicyResponse
 *
 * @brief  Handles IAM DetachUserPolicy responses.
 *
 * @see    IAMClient::detachUserPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachUserPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DetachUserPolicyResponsePrivate(this), parent)
{
    setRequest(new DetachUserPolicyRequest(request));
    setReply(reply);
}

const DetachUserPolicyRequest * DetachUserPolicyResponse::request() const
{
    Q_D(const DetachUserPolicyResponse);
    return static_cast<const DetachUserPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DetachUserPolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachUserPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachUserPolicyResponsePrivate
 *
 * @brief  Private implementation for DetachUserPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachUserPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachUserPolicyResponse instance.
 */
DetachUserPolicyResponsePrivate::DetachUserPolicyResponsePrivate(
    DetachUserPolicyQueueResponse * const q) : DetachUserPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DetachUserPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachUserPolicyResponsePrivate::DetachUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachUserPolicyResponse"));
    /// @todo
}
