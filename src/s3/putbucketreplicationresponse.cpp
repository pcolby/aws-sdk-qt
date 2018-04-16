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

#include "putbucketreplicationresponse.h"
#include "putbucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketReplicationResponse
 *
 * \brief The PutBucketReplicationResponse class provides an interace for S3 PutBucketReplication responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketReplication
 */

/*!
 * @brief  Constructs a new PutBucketReplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketReplicationResponse::PutBucketReplicationResponse(
        const PutBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new PutBucketReplicationRequest(request));
    setReply(reply);
}

const PutBucketReplicationRequest * PutBucketReplicationResponse::request() const
{
    Q_D(const PutBucketReplicationResponse);
    return static_cast<const PutBucketReplicationRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 PutBucketReplication response.
 *
 * @param  response  Response to parse.
 */
void PutBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutBucketReplicationResponsePrivate
 *
 * \brief Private implementation for PutBucketReplicationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketReplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketReplicationResponse instance.
 */
PutBucketReplicationResponsePrivate::PutBucketReplicationResponsePrivate(
    PutBucketReplicationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 PutBucketReplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketReplicationResponsePrivate::parsePutBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketReplicationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
