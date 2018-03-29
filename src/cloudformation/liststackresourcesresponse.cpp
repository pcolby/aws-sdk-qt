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

#include "liststackresourcesresponse.h"
#include "liststackresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackResourcesResponse
 *
 * @brief  Handles CloudFormation ListStackResources responses.
 *
 * @see    CloudFormationClient::listStackResources
 */

/**
 * @brief  Constructs a new ListStackResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackResourcesResponse::ListStackResourcesResponse(
        const ListStackResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStackResourcesResponsePrivate(this), parent)
{
    setRequest(new ListStackResourcesRequest(request));
    setReply(reply);
}

const ListStackResourcesRequest * ListStackResourcesResponse::request() const
{
    Q_D(const ListStackResourcesResponse);
    return static_cast<const ListStackResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStackResources response.
 *
 * @param  response  Response to parse.
 */
void ListStackResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStackResourcesResponsePrivate
 *
 * @brief  Private implementation for ListStackResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStackResourcesResponse instance.
 */
ListStackResourcesResponsePrivate::ListStackResourcesResponsePrivate(
    ListStackResourcesResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStackResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStackResourcesResponsePrivate::ListStackResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackResourcesResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
