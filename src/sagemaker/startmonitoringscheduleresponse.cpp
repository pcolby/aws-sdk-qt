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

#include "startmonitoringscheduleresponse.h"
#include "startmonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartMonitoringScheduleResponse
 * \brief The StartMonitoringScheduleResponse class provides an interace for SageMaker StartMonitoringSchedule responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::startMonitoringSchedule
 */

/*!
 * Constructs a StartMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
StartMonitoringScheduleResponse::StartMonitoringScheduleResponse(
        const StartMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new StartMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMonitoringScheduleRequest * StartMonitoringScheduleResponse::request() const
{
    return static_cast<const StartMonitoringScheduleRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker StartMonitoringSchedule \a response.
 */
void StartMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StartMonitoringScheduleResponsePrivate
 * \brief The StartMonitoringScheduleResponsePrivate class provides private implementation for StartMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
StartMonitoringScheduleResponsePrivate::StartMonitoringScheduleResponsePrivate(
    StartMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StartMonitoringSchedule response element from \a xml.
 */
void StartMonitoringScheduleResponsePrivate::parseStartMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
