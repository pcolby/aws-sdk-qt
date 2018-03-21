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

#include "putruleresponse.h"
#include "putruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  PutRuleResponse
 *
 * @brief  Handles CloudWatchEvents PutRule responses.
 *
 * @see    CloudWatchEventsClient::putRule
 */

/**
 * @brief  Constructs a new PutRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRuleResponse::PutRuleResponse(
        const PutRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new PutRuleResponsePrivate(this), parent)
{
    setRequest(new PutRuleRequest(request));
    setReply(reply);
}

const PutRuleRequest * PutRuleResponse::request() const
{
    Q_D(const PutRuleResponse);
    return static_cast<const PutRuleRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents PutRule response.
 *
 * @param  response  Response to parse.
 */
void PutRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRuleResponsePrivate
 *
 * @brief  Private implementation for PutRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRuleResponse instance.
 */
PutRuleResponsePrivate::PutRuleResponsePrivate(
    PutRuleQueueResponse * const q) : PutRulePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents PutRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRuleResponsePrivate::PutRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace AWS
