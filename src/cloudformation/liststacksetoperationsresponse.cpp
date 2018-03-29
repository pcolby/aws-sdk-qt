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

#include "liststacksetoperationsresponse.h"
#include "liststacksetoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  ListStackSetOperationsResponse
 *
 * @brief  Handles CloudFormation ListStackSetOperations responses.
 *
 * @see    CloudFormationClient::listStackSetOperations
 */

/**
 * @brief  Constructs a new ListStackSetOperationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackSetOperationsResponse::ListStackSetOperationsResponse(
        const ListStackSetOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStackSetOperationsResponsePrivate(this), parent)
{
    setRequest(new ListStackSetOperationsRequest(request));
    setReply(reply);
}

const ListStackSetOperationsRequest * ListStackSetOperationsResponse::request() const
{
    Q_D(const ListStackSetOperationsResponse);
    return static_cast<const ListStackSetOperationsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStackSetOperations response.
 *
 * @param  response  Response to parse.
 */
void ListStackSetOperationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStackSetOperationsResponsePrivate
 *
 * @brief  Private implementation for ListStackSetOperationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStackSetOperationsResponse instance.
 */
ListStackSetOperationsResponsePrivate::ListStackSetOperationsResponsePrivate(
    ListStackSetOperationsQueueResponse * const q) : ListStackSetOperationsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStackSetOperationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStackSetOperationsResponsePrivate::ListStackSetOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackSetOperationsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
