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

#include "createtagsresponse.h"
#include "createtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  CreateTagsResponse
 *
 * @brief  Handles ApplicationDiscoveryService CreateTags responses.
 *
 * @see    ApplicationDiscoveryServiceClient::createTags
 */

/**
 * @brief  Constructs a new CreateTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTagsResponse::CreateTagsResponse(
        const CreateTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new CreateTagsResponsePrivate(this), parent)
{
    setRequest(new CreateTagsRequest(request));
    setReply(reply);
}

const CreateTagsRequest * CreateTagsResponse::request() const
{
    Q_D(const CreateTagsResponse);
    return static_cast<const CreateTagsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService CreateTags response.
 *
 * @param  response  Response to parse.
 */
void CreateTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTagsResponsePrivate
 *
 * @brief  Private implementation for CreateTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTagsResponse instance.
 */
CreateTagsResponsePrivate::CreateTagsResponsePrivate(
    CreateTagsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService CreateTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTagsResponsePrivate::CreateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTagsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
