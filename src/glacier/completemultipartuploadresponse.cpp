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

#include "completemultipartuploadresponse.h"
#include "completemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  CompleteMultipartUploadResponse
 *
 * @brief  Handles Glacier CompleteMultipartUpload responses.
 *
 * @see    GlacierClient::completeMultipartUpload
 */

/**
 * @brief  Constructs a new CompleteMultipartUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteMultipartUploadResponse::CompleteMultipartUploadResponse(
        const CompleteMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new CompleteMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteMultipartUploadRequest(request));
    setReply(reply);
}

const CompleteMultipartUploadRequest * CompleteMultipartUploadResponse::request() const
{
    Q_D(const CompleteMultipartUploadResponse);
    return static_cast<const CompleteMultipartUploadRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier CompleteMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void CompleteMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompleteMultipartUploadResponsePrivate
 *
 * @brief  Private implementation for CompleteMultipartUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteMultipartUploadResponse instance.
 */
CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponsePrivate(
    CompleteMultipartUploadQueueResponse * const q) : CompleteMultipartUploadPrivate(q)
{

}

/**
 * @brief  Parse an Glacier CompleteMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMultipartUploadResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
