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

#include "createbucketresponse.h"
#include "createbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  CreateBucketResponse
 *
 * @brief  Handles S3 CreateBucket responses.
 *
 * @see    S3Client::createBucket
 */

/**
 * @brief  Constructs a new CreateBucketResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBucketResponse::CreateBucketResponse(
        const CreateBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateBucketResponse(new CreateBucketResponsePrivate(this), parent)
{
    setRequest(new CreateBucketRequest(request));
    setReply(reply);
}

const CreateBucketRequest * CreateBucketResponse::request() const
{
    Q_D(const CreateBucketResponse);
    return static_cast<const CreateBucketRequest *>(d->request);
}

/**
 * @brief  Parse a S3 CreateBucket response.
 *
 * @param  response  Response to parse.
 */
void CreateBucketResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBucketResponsePrivate
 *
 * @brief  Private implementation for CreateBucketResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBucketResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBucketResponse instance.
 */
CreateBucketResponsePrivate::CreateBucketResponsePrivate(
    CreateBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 CreateBucketResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBucketResponsePrivate::parseCreateBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBucketResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
