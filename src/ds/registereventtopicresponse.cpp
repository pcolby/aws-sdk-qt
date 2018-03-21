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

#include "registereventtopicresponse.h"
#include "registereventtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  RegisterEventTopicResponse
 *
 * @brief  Handles DirectoryService RegisterEventTopic responses.
 *
 * @see    DirectoryServiceClient::registerEventTopic
 */

/**
 * @brief  Constructs a new RegisterEventTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterEventTopicResponse::RegisterEventTopicResponse(
        const RegisterEventTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new RegisterEventTopicResponsePrivate(this), parent)
{
    setRequest(new RegisterEventTopicRequest(request));
    setReply(reply);
}

const RegisterEventTopicRequest * RegisterEventTopicResponse::request() const
{
    Q_D(const RegisterEventTopicResponse);
    return static_cast<const RegisterEventTopicRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService RegisterEventTopic response.
 *
 * @param  response  Response to parse.
 */
void RegisterEventTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterEventTopicResponsePrivate
 *
 * @brief  Private implementation for RegisterEventTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEventTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterEventTopicResponse instance.
 */
RegisterEventTopicResponsePrivate::RegisterEventTopicResponsePrivate(
    RegisterEventTopicQueueResponse * const q) : RegisterEventTopicPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService RegisterEventTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterEventTopicResponsePrivate::RegisterEventTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterEventTopicResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
