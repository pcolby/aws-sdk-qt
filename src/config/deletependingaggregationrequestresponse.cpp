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

#include "deletependingaggregationrequestresponse.h"
#include "deletependingaggregationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeletePendingAggregationRequestResponse
 *
 * @brief  Handles ConfigService DeletePendingAggregationRequest responses.
 *
 * @see    ConfigServiceClient::deletePendingAggregationRequest
 */

/**
 * @brief  Constructs a new DeletePendingAggregationRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePendingAggregationRequestResponse::DeletePendingAggregationRequestResponse(
        const DeletePendingAggregationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeletePendingAggregationRequestResponsePrivate(this), parent)
{
    setRequest(new DeletePendingAggregationRequestRequest(request));
    setReply(reply);
}

const DeletePendingAggregationRequestRequest * DeletePendingAggregationRequestResponse::request() const
{
    Q_D(const DeletePendingAggregationRequestResponse);
    return static_cast<const DeletePendingAggregationRequestRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeletePendingAggregationRequest response.
 *
 * @param  response  Response to parse.
 */
void DeletePendingAggregationRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePendingAggregationRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePendingAggregationRequestResponsePrivate
 *
 * @brief  Private implementation for DeletePendingAggregationRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePendingAggregationRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePendingAggregationRequestResponse instance.
 */
DeletePendingAggregationRequestResponsePrivate::DeletePendingAggregationRequestResponsePrivate(
    DeletePendingAggregationRequestResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeletePendingAggregationRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePendingAggregationRequestResponsePrivate::parseDeletePendingAggregationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePendingAggregationRequestResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
