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

#include "deletehealthcheckresponse.h"
#include "deletehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  DeleteHealthCheckResponse
 *
 * @brief  Handles Route53 DeleteHealthCheck responses.
 *
 * @see    Route53Client::deleteHealthCheck
 */

/**
 * @brief  Constructs a new DeleteHealthCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHealthCheckResponse::DeleteHealthCheckResponse(
        const DeleteHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteHealthCheckResponsePrivate(this), parent)
{
    setRequest(new DeleteHealthCheckRequest(request));
    setReply(reply);
}

const DeleteHealthCheckRequest * DeleteHealthCheckResponse::request() const
{
    Q_D(const DeleteHealthCheckResponse);
    return static_cast<const DeleteHealthCheckRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteHealthCheck response.
 *
 * @param  response  Response to parse.
 */
void DeleteHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteHealthCheckResponsePrivate
 *
 * @brief  Private implementation for DeleteHealthCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHealthCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHealthCheckResponse instance.
 */
DeleteHealthCheckResponsePrivate::DeleteHealthCheckResponsePrivate(
    DeleteHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHealthCheckResponsePrivate::DeleteHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHealthCheckResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
