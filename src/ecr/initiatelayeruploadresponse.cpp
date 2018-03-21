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

#include "initiatelayeruploadresponse.h"
#include "initiatelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  InitiateLayerUploadResponse
 *
 * @brief  Handles ECR InitiateLayerUpload responses.
 *
 * @see    ECRClient::initiateLayerUpload
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateLayerUploadResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new InitiateLayerUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateLayerUploadRequest(request));
    setReply(reply);
}

const InitiateLayerUploadRequest * InitiateLayerUploadResponse::request() const
{
    Q_D(const InitiateLayerUploadResponse);
    return static_cast<const InitiateLayerUploadRequest *>(d->request);
}

/**
 * @brief  Parse a ECR InitiateLayerUpload response.
 *
 * @param  response  Response to parse.
 */
void InitiateLayerUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateLayerUploadResponsePrivate
 *
 * @brief  Private implementation for InitiateLayerUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateLayerUploadResponse instance.
 */
InitiateLayerUploadResponsePrivate::InitiateLayerUploadResponsePrivate(
    InitiateLayerUploadQueueResponse * const q) : InitiateLayerUploadPrivate(q)
{

}

/**
 * @brief  Parse an ECR InitiateLayerUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateLayerUploadResponsePrivate::InitiateLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateLayerUploadResponse"));
    /// @todo
}
