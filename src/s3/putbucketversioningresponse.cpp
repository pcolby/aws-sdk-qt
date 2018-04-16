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

#include "putbucketversioningresponse.h"
#include "putbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketVersioningResponse
 *
 * \brief The PutBucketVersioningResponse class encapsulates S3 PutBucketVersioning responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketVersioning
 */

/*!
 * @brief  Constructs a new PutBucketVersioningResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketVersioningResponse::PutBucketVersioningResponse(
        const PutBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new PutBucketVersioningRequest(request));
    setReply(reply);
}

const PutBucketVersioningRequest * PutBucketVersioningResponse::request() const
{
    Q_D(const PutBucketVersioningResponse);
    return static_cast<const PutBucketVersioningRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 PutBucketVersioning response.
 *
 * @param  response  Response to parse.
 */
void PutBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutBucketVersioningResponsePrivate
 *
 * \brief Private implementation for PutBucketVersioningResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketVersioningResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketVersioningResponse instance.
 */
PutBucketVersioningResponsePrivate::PutBucketVersioningResponsePrivate(
    PutBucketVersioningResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 PutBucketVersioningResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketVersioningResponsePrivate::parsePutBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketVersioningResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
