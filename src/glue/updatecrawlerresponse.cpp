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

#include "updatecrawlerresponse.h"
#include "updatecrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateCrawlerResponse
 *
 * @brief  Handles Glue UpdateCrawler responses.
 *
 * @see    GlueClient::updateCrawler
 */

/**
 * @brief  Constructs a new UpdateCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCrawlerResponse::UpdateCrawlerResponse(
        const UpdateCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateCrawlerResponsePrivate(this), parent)
{
    setRequest(new UpdateCrawlerRequest(request));
    setReply(reply);
}

const UpdateCrawlerRequest * UpdateCrawlerResponse::request() const
{
    Q_D(const UpdateCrawlerResponse);
    return static_cast<const UpdateCrawlerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateCrawler response.
 *
 * @param  response  Response to parse.
 */
void UpdateCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCrawlerResponsePrivate
 *
 * @brief  Private implementation for UpdateCrawlerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCrawlerResponse instance.
 */
UpdateCrawlerResponsePrivate::UpdateCrawlerResponsePrivate(
    UpdateCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCrawlerResponsePrivate::parseUpdateCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
