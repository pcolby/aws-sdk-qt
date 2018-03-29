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

#include "listpolicyversionsresponse.h"
#include "listpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListPolicyVersionsResponse
 *
 * @brief  Handles IoT ListPolicyVersions responses.
 *
 * @see    IoTClient::listPolicyVersions
 */

/**
 * @brief  Constructs a new ListPolicyVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPolicyVersionsResponse::ListPolicyVersionsResponse(
        const ListPolicyVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyVersionsRequest(request));
    setReply(reply);
}

const ListPolicyVersionsRequest * ListPolicyVersionsResponse::request() const
{
    Q_D(const ListPolicyVersionsResponse);
    return static_cast<const ListPolicyVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListPolicyVersions response.
 *
 * @param  response  Response to parse.
 */
void ListPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPolicyVersionsResponsePrivate
 *
 * @brief  Private implementation for ListPolicyVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPolicyVersionsResponse instance.
 */
ListPolicyVersionsResponsePrivate::ListPolicyVersionsResponsePrivate(
    ListPolicyVersionsQueueResponse * const q) : ListPolicyVersionsPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListPolicyVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPolicyVersionsResponsePrivate::ListPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyVersionsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
