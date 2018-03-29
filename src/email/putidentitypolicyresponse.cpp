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

#include "putidentitypolicyresponse.h"
#include "putidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  PutIdentityPolicyResponse
 *
 * @brief  Handles SES PutIdentityPolicy responses.
 *
 * @see    SESClient::putIdentityPolicy
 */

/**
 * @brief  Constructs a new PutIdentityPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutIdentityPolicyResponse::PutIdentityPolicyResponse(
        const PutIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new PutIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new PutIdentityPolicyRequest(request));
    setReply(reply);
}

const PutIdentityPolicyRequest * PutIdentityPolicyResponse::request() const
{
    Q_D(const PutIdentityPolicyResponse);
    return static_cast<const PutIdentityPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a SES PutIdentityPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutIdentityPolicyResponsePrivate
 *
 * @brief  Private implementation for PutIdentityPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIdentityPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutIdentityPolicyResponse instance.
 */
PutIdentityPolicyResponsePrivate::PutIdentityPolicyResponsePrivate(
    PutIdentityPolicyResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES PutIdentityPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutIdentityPolicyResponsePrivate::parsePutIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIdentityPolicyResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
