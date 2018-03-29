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

#include "createimagebuilderstreamingurlresponse.h"
#include "createimagebuilderstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  CreateImageBuilderStreamingURLResponse
 *
 * @brief  Handles AppStream CreateImageBuilderStreamingURL responses.
 *
 * @see    AppStreamClient::createImageBuilderStreamingURL
 */

/**
 * @brief  Constructs a new CreateImageBuilderStreamingURLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateImageBuilderStreamingURLResponse::CreateImageBuilderStreamingURLResponse(
        const CreateImageBuilderStreamingURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateImageBuilderStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateImageBuilderStreamingURLRequest(request));
    setReply(reply);
}

const CreateImageBuilderStreamingURLRequest * CreateImageBuilderStreamingURLResponse::request() const
{
    Q_D(const CreateImageBuilderStreamingURLResponse);
    return static_cast<const CreateImageBuilderStreamingURLRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream CreateImageBuilderStreamingURL response.
 *
 * @param  response  Response to parse.
 */
void CreateImageBuilderStreamingURLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateImageBuilderStreamingURLResponsePrivate
 *
 * @brief  Private implementation for CreateImageBuilderStreamingURLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderStreamingURLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateImageBuilderStreamingURLResponse instance.
 */
CreateImageBuilderStreamingURLResponsePrivate::CreateImageBuilderStreamingURLResponsePrivate(
    CreateImageBuilderStreamingURLQueueResponse * const q) : CreateImageBuilderStreamingURLPrivate(q)
{

}

/**
 * @brief  Parse an AppStream CreateImageBuilderStreamingURLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateImageBuilderStreamingURLResponsePrivate::CreateImageBuilderStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageBuilderStreamingURLResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
