/*
    Copyright 2013-2021 Paul Colby

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

#include "stopmonitoringscheduleresponse.h"
#include "stopmonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopMonitoringScheduleResponse
 * \brief The StopMonitoringScheduleResponse class provides an interace for SageMaker StopMonitoringSchedule responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::stopMonitoringSchedule
 */

/*!
 * Constructs a StopMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
StopMonitoringScheduleResponse::StopMonitoringScheduleResponse(
        const StopMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new StopMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopMonitoringScheduleRequest * StopMonitoringScheduleResponse::request() const
{
    Q_D(const StopMonitoringScheduleResponse);
    return static_cast<const StopMonitoringScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopMonitoringSchedule \a response.
 */
void StopMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopMonitoringScheduleResponsePrivate
 * \brief The StopMonitoringScheduleResponsePrivate class provides private implementation for StopMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
StopMonitoringScheduleResponsePrivate::StopMonitoringScheduleResponsePrivate(
    StopMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopMonitoringSchedule response element from \a xml.
 */
void StopMonitoringScheduleResponsePrivate::parseStopMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
