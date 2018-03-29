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

#include "startcrawlerresponse.h"
#include "startcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  StartCrawlerResponse
 *
 * @brief  Handles Glue StartCrawler responses.
 *
 * @see    GlueClient::startCrawler
 */

/**
 * @brief  Constructs a new StartCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartCrawlerResponse::StartCrawlerResponse(
        const StartCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartCrawlerResponsePrivate(this), parent)
{
    setRequest(new StartCrawlerRequest(request));
    setReply(reply);
}

const StartCrawlerRequest * StartCrawlerResponse::request() const
{
    Q_D(const StartCrawlerResponse);
    return static_cast<const StartCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StartCrawler response.
 *
 * @param  response  Response to parse.
 */
void StartCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartCrawlerResponsePrivate
 *
 * @brief  Private implementation for StartCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartCrawlerResponse instance.
 */
StartCrawlerResponsePrivate::StartCrawlerResponsePrivate(
    StartCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue StartCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartCrawlerResponsePrivate::parseStartCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
