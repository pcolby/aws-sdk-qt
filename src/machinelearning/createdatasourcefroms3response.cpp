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

#include "createdatasourcefroms3response.h"
#include "createdatasourcefroms3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromS3Response
 *
 * @brief  Handles MachineLearning CreateDataSourceFromS3 responses.
 *
 * @see    MachineLearningClient::createDataSourceFromS3
 */

/**
 * @brief  Constructs a new CreateDataSourceFromS3Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDataSourceFromS3Response::CreateDataSourceFromS3Response(
        const CreateDataSourceFromS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateDataSourceFromS3ResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromS3Request(request));
    setReply(reply);
}

const CreateDataSourceFromS3Request * CreateDataSourceFromS3Response::request() const
{
    Q_D(const CreateDataSourceFromS3Response);
    return static_cast<const CreateDataSourceFromS3Request *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateDataSourceFromS3 response.
 *
 * @param  response  Response to parse.
 */
void CreateDataSourceFromS3Response::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromS3ResponsePrivate
 *
 * @brief  Private implementation for CreateDataSourceFromS3Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromS3ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDataSourceFromS3Response instance.
 */
CreateDataSourceFromS3ResponsePrivate::CreateDataSourceFromS3ResponsePrivate(
    CreateDataSourceFromS3QueueResponse * const q) : CreateDataSourceFromS3Private(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateDataSourceFromS3Response element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDataSourceFromS3ResponsePrivate::CreateDataSourceFromS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromS3Response"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
