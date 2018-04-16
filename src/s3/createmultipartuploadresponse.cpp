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

#include "createmultipartuploadresponse.h"
#include "createmultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CreateMultipartUploadResponse
 *
 * \brief The CreateMultipartUploadResponse class provides an interace for S3 CreateMultipartUpload responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::createMultipartUpload
 */

/*!
 * @brief  Constructs a new CreateMultipartUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMultipartUploadResponse::CreateMultipartUploadResponse(
        const CreateMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CreateMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CreateMultipartUploadRequest(request));
    setReply(reply);
}

const CreateMultipartUploadRequest * CreateMultipartUploadResponse::request() const
{
    Q_D(const CreateMultipartUploadResponse);
    return static_cast<const CreateMultipartUploadRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 CreateMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void CreateMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateMultipartUploadResponsePrivate
 *
 * \brief Private implementation for CreateMultipartUploadResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMultipartUploadResponse instance.
 */
CreateMultipartUploadResponsePrivate::CreateMultipartUploadResponsePrivate(
    CreateMultipartUploadResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 CreateMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMultipartUploadResponsePrivate::parseCreateMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultipartUploadResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
