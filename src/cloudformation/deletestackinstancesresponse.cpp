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

#include "deletestackinstancesresponse.h"
#include "deletestackinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DeleteStackInstancesResponse
 *
 * @brief  Handles CloudFormation DeleteStackInstances responses.
 *
 * @see    CloudFormationClient::deleteStackInstances
 */

/**
 * @brief  Constructs a new DeleteStackInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStackInstancesResponse::DeleteStackInstancesResponse(
        const DeleteStackInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DeleteStackInstancesResponsePrivate(this), parent)
{
    setRequest(new DeleteStackInstancesRequest(request));
    setReply(reply);
}

const DeleteStackInstancesRequest * DeleteStackInstancesResponse::request() const
{
    Q_D(const DeleteStackInstancesResponse);
    return static_cast<const DeleteStackInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DeleteStackInstances response.
 *
 * @param  response  Response to parse.
 */
void DeleteStackInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStackInstancesResponsePrivate
 *
 * @brief  Private implementation for DeleteStackInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStackInstancesResponse instance.
 */
DeleteStackInstancesResponsePrivate::DeleteStackInstancesResponsePrivate(
    DeleteStackInstancesResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DeleteStackInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStackInstancesResponsePrivate::DeleteStackInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackInstancesResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
