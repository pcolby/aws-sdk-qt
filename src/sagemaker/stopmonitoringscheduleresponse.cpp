// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
