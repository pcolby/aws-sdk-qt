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

#include "deletedestinationresponse.h"
#include "deletedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DeleteDestinationResponse
 *
 * @brief  Handles CloudWatchLogs DeleteDestination responses.
 *
 * @see    CloudWatchLogsClient::deleteDestination
 */

/**
 * @brief  Constructs a new DeleteDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDestinationResponse::DeleteDestinationResponse(
        const DeleteDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteDestinationResponse(new DeleteDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteDestinationRequest(request));
    setReply(reply);
}

const DeleteDestinationRequest * DeleteDestinationResponse::request() const
{
    Q_D(const DeleteDestinationResponse);
    return static_cast<const DeleteDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteDestination response.
 *
 * @param  response  Response to parse.
 */
void DeleteDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDestinationResponsePrivate
 *
 * @brief  Private implementation for DeleteDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDestinationResponse instance.
 */
DeleteDestinationResponsePrivate::DeleteDestinationResponsePrivate(
    DeleteDestinationResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDestinationResponsePrivate::parseDeleteDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDestinationResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
