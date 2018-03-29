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

#include "subscriberesponse.h"
#include "subscriberesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  SubscribeResponse
 *
 * @brief  Handles SNS Subscribe responses.
 *
 * @see    SNSClient::subscribe
 */

/**
 * @brief  Constructs a new SubscribeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubscribeResponse::SubscribeResponse(
        const SubscribeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new SubscribeResponsePrivate(this), parent)
{
    setRequest(new SubscribeRequest(request));
    setReply(reply);
}

const SubscribeRequest * SubscribeResponse::request() const
{
    Q_D(const SubscribeResponse);
    return static_cast<const SubscribeRequest *>(d->request);
}

/**
 * @brief  Parse a SNS Subscribe response.
 *
 * @param  response  Response to parse.
 */
void SubscribeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubscribeResponsePrivate
 *
 * @brief  Private implementation for SubscribeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubscribeResponse instance.
 */
SubscribeResponsePrivate::SubscribeResponsePrivate(
    SubscribeResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS SubscribeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubscribeResponsePrivate::SubscribeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
