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

#include "unsubscriberesponse.h"
#include "unsubscriberesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  UnsubscribeResponse
 *
 * @brief  Handles SNS Unsubscribe responses.
 *
 * @see    SNSClient::unsubscribe
 */

/**
 * @brief  Constructs a new UnsubscribeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnsubscribeResponse::UnsubscribeResponse(
        const UnsubscribeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new UnsubscribeResponsePrivate(this), parent)
{
    setRequest(new UnsubscribeRequest(request));
    setReply(reply);
}

const UnsubscribeRequest * UnsubscribeResponse::request() const
{
    Q_D(const UnsubscribeResponse);
    return static_cast<const UnsubscribeRequest *>(d->request);
}

/**
 * @brief  Parse a SNS Unsubscribe response.
 *
 * @param  response  Response to parse.
 */
void UnsubscribeResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnsubscribeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnsubscribeResponsePrivate
 *
 * @brief  Private implementation for UnsubscribeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnsubscribeResponse instance.
 */
UnsubscribeResponsePrivate::UnsubscribeResponsePrivate(
    UnsubscribeResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS UnsubscribeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnsubscribeResponsePrivate::parseUnsubscribeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnsubscribeResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
