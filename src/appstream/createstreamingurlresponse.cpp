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

#include "createstreamingurlresponse.h"
#include "createstreamingurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  CreateStreamingURLResponse
 *
 * @brief  Handles AppStream CreateStreamingURL responses.
 *
 * @see    AppStreamClient::createStreamingURL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingURLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateStreamingURLResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingURLRequest(request));
    setReply(reply);
}

const CreateStreamingURLRequest * CreateStreamingURLResponse::request() const
{
    Q_D(const CreateStreamingURLResponse);
    return static_cast<const CreateStreamingURLRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream CreateStreamingURL response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamingURLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStreamingURLResponsePrivate
 *
 * @brief  Private implementation for CreateStreamingURLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingURLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamingURLResponse instance.
 */
CreateStreamingURLResponsePrivate::CreateStreamingURLResponsePrivate(
    CreateStreamingURLQueueResponse * const q) : CreateStreamingURLPrivate(q)
{

}

/**
 * @brief  Parse an AppStream CreateStreamingURLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamingURLResponsePrivate::CreateStreamingURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingURLResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
