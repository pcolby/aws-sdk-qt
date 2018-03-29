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

#include "getcrawlerresponse.h"
#include "getcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetCrawlerResponse
 *
 * @brief  Handles Glue GetCrawler responses.
 *
 * @see    GlueClient::getCrawler
 */

/**
 * @brief  Constructs a new GetCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCrawlerResponse::GetCrawlerResponse(
        const GetCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlerResponsePrivate(this), parent)
{
    setRequest(new GetCrawlerRequest(request));
    setReply(reply);
}

const GetCrawlerRequest * GetCrawlerResponse::request() const
{
    Q_D(const GetCrawlerResponse);
    return static_cast<const GetCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetCrawler response.
 *
 * @param  response  Response to parse.
 */
void GetCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCrawlerResponsePrivate
 *
 * @brief  Private implementation for GetCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCrawlerResponse instance.
 */
GetCrawlerResponsePrivate::GetCrawlerResponsePrivate(
    GetCrawlerQueueResponse * const q) : GetCrawlerPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCrawlerResponsePrivate::GetCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
