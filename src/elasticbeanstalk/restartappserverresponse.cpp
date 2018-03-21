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

#include "restartappserverresponse.h"
#include "restartappserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  RestartAppServerResponse
 *
 * @brief  Handles ElasticBeanstalk RestartAppServer responses.
 *
 * @see    ElasticBeanstalkClient::restartAppServer
 */

/**
 * @brief  Constructs a new RestartAppServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestartAppServerResponse::RestartAppServerResponse(
        const RestartAppServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new RestartAppServerResponsePrivate(this), parent)
{
    setRequest(new RestartAppServerRequest(request));
    setReply(reply);
}

const RestartAppServerRequest * RestartAppServerResponse::request() const
{
    Q_D(const RestartAppServerResponse);
    return static_cast<const RestartAppServerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk RestartAppServer response.
 *
 * @param  response  Response to parse.
 */
void RestartAppServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestartAppServerResponsePrivate
 *
 * @brief  Private implementation for RestartAppServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestartAppServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestartAppServerResponse instance.
 */
RestartAppServerResponsePrivate::RestartAppServerResponsePrivate(
    RestartAppServerQueueResponse * const q) : RestartAppServerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk RestartAppServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestartAppServerResponsePrivate::RestartAppServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestartAppServerResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
