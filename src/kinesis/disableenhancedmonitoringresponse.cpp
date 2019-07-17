/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disableenhancedmonitoringresponse.h"
#include "disableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DisableEnhancedMonitoringResponse
 * \brief The DisableEnhancedMonitoringResponse class provides an interace for Kinesis DisableEnhancedMonitoring responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::disableEnhancedMonitoring
 */

/*!
 * Constructs a DisableEnhancedMonitoringResponse object for \a reply to \a request, with parent \a parent.
 */
DisableEnhancedMonitoringResponse::DisableEnhancedMonitoringResponse(
        const DisableEnhancedMonitoringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DisableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new DisableEnhancedMonitoringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableEnhancedMonitoringRequest * DisableEnhancedMonitoringResponse::request() const
{
    Q_D(const DisableEnhancedMonitoringResponse);
    return static_cast<const DisableEnhancedMonitoringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DisableEnhancedMonitoring \a response.
 */
void DisableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableEnhancedMonitoringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DisableEnhancedMonitoringResponsePrivate
 * \brief The DisableEnhancedMonitoringResponsePrivate class provides private implementation for DisableEnhancedMonitoringResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DisableEnhancedMonitoringResponsePrivate object with public implementation \a q.
 */
DisableEnhancedMonitoringResponsePrivate::DisableEnhancedMonitoringResponsePrivate(
    DisableEnhancedMonitoringResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DisableEnhancedMonitoring response element from \a xml.
 */
void DisableEnhancedMonitoringResponsePrivate::parseDisableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableEnhancedMonitoringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
