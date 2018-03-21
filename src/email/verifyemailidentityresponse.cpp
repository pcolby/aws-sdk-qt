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

#include "verifyemailidentityresponse.h"
#include "verifyemailidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  VerifyEmailIdentityResponse
 *
 * @brief  Handles SES VerifyEmailIdentity responses.
 *
 * @see    SESClient::verifyEmailIdentity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyEmailIdentityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new VerifyEmailIdentityResponsePrivate(this), parent)
{
    setRequest(new VerifyEmailIdentityRequest(request));
    setReply(reply);
}

const VerifyEmailIdentityRequest * VerifyEmailIdentityResponse::request() const
{
    Q_D(const VerifyEmailIdentityResponse);
    return static_cast<const VerifyEmailIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a SES VerifyEmailIdentity response.
 *
 * @param  response  Response to parse.
 */
void VerifyEmailIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  VerifyEmailIdentityResponsePrivate
 *
 * @brief  Private implementation for VerifyEmailIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyEmailIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public VerifyEmailIdentityResponse instance.
 */
VerifyEmailIdentityResponsePrivate::VerifyEmailIdentityResponsePrivate(
    VerifyEmailIdentityQueueResponse * const q) : VerifyEmailIdentityPrivate(q)
{

}

/**
 * @brief  Parse an SES VerifyEmailIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void VerifyEmailIdentityResponsePrivate::VerifyEmailIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyEmailIdentityResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
