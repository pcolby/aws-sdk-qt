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

#include "createcrawlerresponse.h"
#include "createcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  CreateCrawlerResponse
 *
 * @brief  Handles Glue CreateCrawler responses.
 *
 * @see    GlueClient::createCrawler
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCrawlerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateCrawlerResponsePrivate(this), parent)
{
    setRequest(new CreateCrawlerRequest(request));
    setReply(reply);
}

const CreateCrawlerRequest * CreateCrawlerResponse::request() const
{
    Q_D(const CreateCrawlerResponse);
    return static_cast<const CreateCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateCrawler response.
 *
 * @param  response  Response to parse.
 */
void CreateCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCrawlerResponsePrivate
 *
 * @brief  Private implementation for CreateCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCrawlerResponse instance.
 */
CreateCrawlerResponsePrivate::CreateCrawlerResponsePrivate(
    CreateCrawlerQueueResponse * const q) : CreateCrawlerPrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCrawlerResponsePrivate::CreateCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
