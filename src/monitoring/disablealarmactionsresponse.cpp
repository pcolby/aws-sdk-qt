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

#include "disablealarmactionsresponse.h"
#include "disablealarmactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DisableAlarmActionsResponse
 *
 * @brief  Handles CloudWatch DisableAlarmActions responses.
 *
 * @see    CloudWatchClient::disableAlarmActions
 */

/**
 * @brief  Constructs a new DisableAlarmActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableAlarmActionsResponse::DisableAlarmActionsResponse(
        const DisableAlarmActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisableAlarmActionsResponse(new DisableAlarmActionsResponsePrivate(this), parent)
{
    setRequest(new DisableAlarmActionsRequest(request));
    setReply(reply);
}

const DisableAlarmActionsRequest * DisableAlarmActionsResponse::request() const
{
    Q_D(const DisableAlarmActionsResponse);
    return static_cast<const DisableAlarmActionsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch DisableAlarmActions response.
 *
 * @param  response  Response to parse.
 */
void DisableAlarmActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableAlarmActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableAlarmActionsResponsePrivate
 *
 * @brief  Private implementation for DisableAlarmActionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAlarmActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableAlarmActionsResponse instance.
 */
DisableAlarmActionsResponsePrivate::DisableAlarmActionsResponsePrivate(
    DisableAlarmActionsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch DisableAlarmActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableAlarmActionsResponsePrivate::parseDisableAlarmActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableAlarmActionsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
