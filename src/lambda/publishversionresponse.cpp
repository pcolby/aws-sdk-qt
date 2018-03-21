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

#include "publishversionresponse.h"
#include "publishversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  PublishVersionResponse
 *
 * @brief  Handles Lambda PublishVersion responses.
 *
 * @see    LambdaClient::publishVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PublishVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PublishVersionResponsePrivate(this), parent)
{
    setRequest(new PublishVersionRequest(request));
    setReply(reply);
}

const PublishVersionRequest * PublishVersionResponse::request() const
{
    Q_D(const PublishVersionResponse);
    return static_cast<const PublishVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda PublishVersion response.
 *
 * @param  response  Response to parse.
 */
void PublishVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PublishVersionResponsePrivate
 *
 * @brief  Private implementation for PublishVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PublishVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PublishVersionResponse instance.
 */
PublishVersionResponsePrivate::PublishVersionResponsePrivate(
    PublishVersionQueueResponse * const q) : PublishVersionPrivate(q)
{

}

/**
 * @brief  Parse an Lambda PublishVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PublishVersionResponsePrivate::PublishVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishVersionResponse"));
    /// @todo
}
