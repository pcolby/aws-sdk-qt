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

#include "putdashboardresponse.h"
#include "putdashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  PutDashboardResponse
 *
 * @brief  Handles CloudWatch PutDashboard responses.
 *
 * @see    CloudWatchClient::putDashboard
 */

/**
 * @brief  Constructs a new PutDashboardResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDashboardResponse::PutDashboardResponse(
        const PutDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutDashboardResponsePrivate(this), parent)
{
    setRequest(new PutDashboardRequest(request));
    setReply(reply);
}

const PutDashboardRequest * PutDashboardResponse::request() const
{
    Q_D(const PutDashboardResponse);
    return static_cast<const PutDashboardRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch PutDashboard response.
 *
 * @param  response  Response to parse.
 */
void PutDashboardResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutDashboardResponsePrivate
 *
 * @brief  Private implementation for PutDashboardResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDashboardResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutDashboardResponse instance.
 */
PutDashboardResponsePrivate::PutDashboardResponsePrivate(
    PutDashboardResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch PutDashboardResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutDashboardResponsePrivate::PutDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDashboardResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
