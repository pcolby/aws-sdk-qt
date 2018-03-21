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

#include "stopcrawlerresponse.h"
#include "stopcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  StopCrawlerResponse
 *
 * @brief  Handles Glue StopCrawler responses.
 *
 * @see    GlueClient::stopCrawler
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopCrawlerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopCrawlerResponsePrivate(this), parent)
{
    setRequest(new StopCrawlerRequest(request));
    setReply(reply);
}

const StopCrawlerRequest * StopCrawlerResponse::request() const
{
    Q_D(const StopCrawlerResponse);
    return static_cast<const StopCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StopCrawler response.
 *
 * @param  response  Response to parse.
 */
void StopCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopCrawlerResponsePrivate
 *
 * @brief  Private implementation for StopCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopCrawlerResponse instance.
 */
StopCrawlerResponsePrivate::StopCrawlerResponsePrivate(
    StopCrawlerQueueResponse * const q) : StopCrawlerPrivate(q)
{

}

/**
 * @brief  Parse an Glue StopCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopCrawlerResponsePrivate::StopCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerResponse"));
    /// @todo
}
