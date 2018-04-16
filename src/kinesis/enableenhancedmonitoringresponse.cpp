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

#include "enableenhancedmonitoringresponse.h"
#include "enableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::EnableEnhancedMonitoringResponse
 *
 * \brief The EnableEnhancedMonitoringResponse class provides an interace for Kinesis EnableEnhancedMonitoring responses.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::enableEnhancedMonitoring
 */

/*!
 * @brief  Constructs a new EnableEnhancedMonitoringResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableEnhancedMonitoringResponse::EnableEnhancedMonitoringResponse(
        const EnableEnhancedMonitoringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new EnableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new EnableEnhancedMonitoringRequest(request));
    setReply(reply);
}

const EnableEnhancedMonitoringRequest * EnableEnhancedMonitoringResponse::request() const
{
    Q_D(const EnableEnhancedMonitoringResponse);
    return static_cast<const EnableEnhancedMonitoringRequest *>(d->request);
}

/*!
 * @brief  Parse a Kinesis EnableEnhancedMonitoring response.
 *
 * @param  response  Response to parse.
 */
void EnableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableEnhancedMonitoringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class EnableEnhancedMonitoringResponsePrivate
 *
 * \brief Private implementation for EnableEnhancedMonitoringResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableEnhancedMonitoringResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableEnhancedMonitoringResponse instance.
 */
EnableEnhancedMonitoringResponsePrivate::EnableEnhancedMonitoringResponsePrivate(
    EnableEnhancedMonitoringResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Kinesis EnableEnhancedMonitoringResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableEnhancedMonitoringResponsePrivate::parseEnableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableEnhancedMonitoringResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
