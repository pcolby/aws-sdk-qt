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

#include "addtagstoresourceresponse.h"
#include "addtagstoresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  AddTagsToResourceResponse
 *
 * @brief  Handles RDS AddTagsToResource responses.
 *
 * @see    RDSClient::addTagsToResource
 */

/**
 * @brief  Constructs a new AddTagsToResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToResourceResponse::AddTagsToResourceResponse(
        const AddTagsToResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new AddTagsToResourceResponsePrivate(this), parent)
{
    setRequest(new AddTagsToResourceRequest(request));
    setReply(reply);
}

const AddTagsToResourceRequest * AddTagsToResourceResponse::request() const
{
    Q_D(const AddTagsToResourceResponse);
    return static_cast<const AddTagsToResourceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS AddTagsToResource response.
 *
 * @param  response  Response to parse.
 */
void AddTagsToResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsToResourceResponsePrivate
 *
 * @brief  Private implementation for AddTagsToResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsToResourceResponse instance.
 */
AddTagsToResourceResponsePrivate::AddTagsToResourceResponsePrivate(
    AddTagsToResourceQueueResponse * const q) : AddTagsToResourcePrivate(q)
{

}

/**
 * @brief  Parse an RDS AddTagsToResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsToResourceResponsePrivate::AddTagsToResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToResourceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
