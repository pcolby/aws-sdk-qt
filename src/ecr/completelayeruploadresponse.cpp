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

#include "completelayeruploadresponse.h"
#include "completelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  CompleteLayerUploadResponse
 *
 * @brief  Handles ECR CompleteLayerUpload responses.
 *
 * @see    ECRClient::completeLayerUpload
 */

/**
 * @brief  Constructs a new CompleteLayerUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteLayerUploadResponse::CompleteLayerUploadResponse(
        const CompleteLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CompleteLayerUploadResponse(new CompleteLayerUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteLayerUploadRequest(request));
    setReply(reply);
}

const CompleteLayerUploadRequest * CompleteLayerUploadResponse::request() const
{
    Q_D(const CompleteLayerUploadResponse);
    return static_cast<const CompleteLayerUploadRequest *>(d->request);
}

/**
 * @brief  Parse a ECR CompleteLayerUpload response.
 *
 * @param  response  Response to parse.
 */
void CompleteLayerUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(CompleteLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompleteLayerUploadResponsePrivate
 *
 * @brief  Private implementation for CompleteLayerUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLayerUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteLayerUploadResponse instance.
 */
CompleteLayerUploadResponsePrivate::CompleteLayerUploadResponsePrivate(
    CompleteLayerUploadResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR CompleteLayerUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteLayerUploadResponsePrivate::parseCompleteLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLayerUploadResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
