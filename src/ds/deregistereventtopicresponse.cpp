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

#include "deregistereventtopicresponse.h"
#include "deregistereventtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DeregisterEventTopicResponse
 *
 * @brief  Handles DirectoryService DeregisterEventTopic responses.
 *
 * @see    DirectoryServiceClient::deregisterEventTopic
 */

/**
 * @brief  Constructs a new DeregisterEventTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterEventTopicResponse::DeregisterEventTopicResponse(
        const DeregisterEventTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeregisterEventTopicResponsePrivate(this), parent)
{
    setRequest(new DeregisterEventTopicRequest(request));
    setReply(reply);
}

const DeregisterEventTopicRequest * DeregisterEventTopicResponse::request() const
{
    Q_D(const DeregisterEventTopicResponse);
    return static_cast<const DeregisterEventTopicRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DeregisterEventTopic response.
 *
 * @param  response  Response to parse.
 */
void DeregisterEventTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterEventTopicResponsePrivate
 *
 * @brief  Private implementation for DeregisterEventTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterEventTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterEventTopicResponse instance.
 */
DeregisterEventTopicResponsePrivate::DeregisterEventTopicResponsePrivate(
    DeregisterEventTopicQueueResponse * const q) : DeregisterEventTopicPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DeregisterEventTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterEventTopicResponsePrivate::DeregisterEventTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterEventTopicResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
