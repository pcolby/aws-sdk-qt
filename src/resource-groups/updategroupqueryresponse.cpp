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

#include "updategroupqueryresponse.h"
#include "updategroupqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  UpdateGroupQueryResponse
 *
 * @brief  Handles ResourceGroups UpdateGroupQuery responses.
 *
 * @see    ResourceGroupsClient::updateGroupQuery
 */

/**
 * @brief  Constructs a new UpdateGroupQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGroupQueryResponse::UpdateGroupQueryResponse(
        const UpdateGroupQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new UpdateGroupQueryResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupQueryRequest(request));
    setReply(reply);
}

const UpdateGroupQueryRequest * UpdateGroupQueryResponse::request() const
{
    Q_D(const UpdateGroupQueryResponse);
    return static_cast<const UpdateGroupQueryRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups UpdateGroupQuery response.
 *
 * @param  response  Response to parse.
 */
void UpdateGroupQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGroupQueryResponsePrivate
 *
 * @brief  Private implementation for UpdateGroupQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGroupQueryResponse instance.
 */
UpdateGroupQueryResponsePrivate::UpdateGroupQueryResponsePrivate(
    UpdateGroupQueryResponse * const q) : ResourceGroupsResponsePrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups UpdateGroupQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGroupQueryResponsePrivate::UpdateGroupQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupQueryResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace QtAws
