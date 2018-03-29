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

#include "decodeauthorizationmessageresponse.h"
#include "decodeauthorizationmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/**
 * @class  DecodeAuthorizationMessageResponse
 *
 * @brief  Handles STS DecodeAuthorizationMessage responses.
 *
 * @see    STSClient::decodeAuthorizationMessage
 */

/**
 * @brief  Constructs a new DecodeAuthorizationMessageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DecodeAuthorizationMessageResponse::DecodeAuthorizationMessageResponse(
        const DecodeAuthorizationMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : STSResponse(new DecodeAuthorizationMessageResponsePrivate(this), parent)
{
    setRequest(new DecodeAuthorizationMessageRequest(request));
    setReply(reply);
}

const DecodeAuthorizationMessageRequest * DecodeAuthorizationMessageResponse::request() const
{
    Q_D(const DecodeAuthorizationMessageResponse);
    return static_cast<const DecodeAuthorizationMessageRequest *>(d->request);
}

/**
 * @brief  Parse a STS DecodeAuthorizationMessage response.
 *
 * @param  response  Response to parse.
 */
void DecodeAuthorizationMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(DecodeAuthorizationMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DecodeAuthorizationMessageResponsePrivate
 *
 * @brief  Private implementation for DecodeAuthorizationMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecodeAuthorizationMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DecodeAuthorizationMessageResponse instance.
 */
DecodeAuthorizationMessageResponsePrivate::DecodeAuthorizationMessageResponsePrivate(
    DecodeAuthorizationMessageResponse * const q) : STSResponsePrivate(q)
{

}

/**
 * @brief  Parse an STS DecodeAuthorizationMessageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DecodeAuthorizationMessageResponsePrivate::DecodeAuthorizationMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecodeAuthorizationMessageResponse"));
    /// @todo
}

} // namespace STS
} // namespace QtAws
