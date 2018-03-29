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

#include "deletecrawlerresponse.h"
#include "deletecrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  DeleteCrawlerResponse
 *
 * @brief  Handles Glue DeleteCrawler responses.
 *
 * @see    GlueClient::deleteCrawler
 */

/**
 * @brief  Constructs a new DeleteCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCrawlerResponse::DeleteCrawlerResponse(
        const DeleteCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteCrawlerResponsePrivate(this), parent)
{
    setRequest(new DeleteCrawlerRequest(request));
    setReply(reply);
}

const DeleteCrawlerRequest * DeleteCrawlerResponse::request() const
{
    Q_D(const DeleteCrawlerResponse);
    return static_cast<const DeleteCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteCrawler response.
 *
 * @param  response  Response to parse.
 */
void DeleteCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCrawlerResponsePrivate
 *
 * @brief  Private implementation for DeleteCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCrawlerResponse instance.
 */
DeleteCrawlerResponsePrivate::DeleteCrawlerResponsePrivate(
    DeleteCrawlerQueueResponse * const q) : DeleteCrawlerPrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCrawlerResponsePrivate::DeleteCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
