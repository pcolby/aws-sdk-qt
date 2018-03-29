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

#include "deletestackresponse.h"
#include "deletestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  DeleteStackResponse
 *
 * @brief  Handles CloudFormation DeleteStack responses.
 *
 * @see    CloudFormationClient::deleteStack
 */

/**
 * @brief  Constructs a new DeleteStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStackResponse::DeleteStackResponse(
        const DeleteStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DeleteStackResponsePrivate(this), parent)
{
    setRequest(new DeleteStackRequest(request));
    setReply(reply);
}

const DeleteStackRequest * DeleteStackResponse::request() const
{
    Q_D(const DeleteStackResponse);
    return static_cast<const DeleteStackRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DeleteStack response.
 *
 * @param  response  Response to parse.
 */
void DeleteStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStackResponsePrivate
 *
 * @brief  Private implementation for DeleteStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStackResponse instance.
 */
DeleteStackResponsePrivate::DeleteStackResponsePrivate(
    DeleteStackQueueResponse * const q) : DeleteStackPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DeleteStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStackResponsePrivate::DeleteStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
