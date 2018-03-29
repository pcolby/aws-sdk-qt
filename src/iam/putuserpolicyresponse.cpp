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

#include "putuserpolicyresponse.h"
#include "putuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  PutUserPolicyResponse
 *
 * @brief  Handles IAM PutUserPolicy responses.
 *
 * @see    IAMClient::putUserPolicy
 */

/**
 * @brief  Constructs a new PutUserPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutUserPolicyResponse::PutUserPolicyResponse(
        const PutUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new PutUserPolicyResponsePrivate(this), parent)
{
    setRequest(new PutUserPolicyRequest(request));
    setReply(reply);
}

const PutUserPolicyRequest * PutUserPolicyResponse::request() const
{
    Q_D(const PutUserPolicyResponse);
    return static_cast<const PutUserPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM PutUserPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutUserPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutUserPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutUserPolicyResponsePrivate
 *
 * @brief  Private implementation for PutUserPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutUserPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutUserPolicyResponse instance.
 */
PutUserPolicyResponsePrivate::PutUserPolicyResponsePrivate(
    PutUserPolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM PutUserPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutUserPolicyResponsePrivate::parsePutUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutUserPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
