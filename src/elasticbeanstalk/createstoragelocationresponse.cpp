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

#include "createstoragelocationresponse.h"
#include "createstoragelocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  CreateStorageLocationResponse
 *
 * @brief  Handles ElasticBeanstalk CreateStorageLocation responses.
 *
 * @see    ElasticBeanstalkClient::createStorageLocation
 */

/**
 * @brief  Constructs a new CreateStorageLocationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStorageLocationResponse::CreateStorageLocationResponse(
        const CreateStorageLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreateStorageLocationResponsePrivate(this), parent)
{
    setRequest(new CreateStorageLocationRequest(request));
    setReply(reply);
}

const CreateStorageLocationRequest * CreateStorageLocationResponse::request() const
{
    Q_D(const CreateStorageLocationResponse);
    return static_cast<const CreateStorageLocationRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CreateStorageLocation response.
 *
 * @param  response  Response to parse.
 */
void CreateStorageLocationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStorageLocationResponsePrivate
 *
 * @brief  Private implementation for CreateStorageLocationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStorageLocationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStorageLocationResponse instance.
 */
CreateStorageLocationResponsePrivate::CreateStorageLocationResponsePrivate(
    CreateStorageLocationQueueResponse * const q) : CreateStorageLocationPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CreateStorageLocationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStorageLocationResponsePrivate::CreateStorageLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStorageLocationResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
