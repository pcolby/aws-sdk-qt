// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemonitoringscheduleresponse.h"
#include "updatemonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateMonitoringScheduleResponse
 * \brief The UpdateMonitoringScheduleResponse class provides an interace for SageMaker UpdateMonitoringSchedule responses.
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
 * \sa SageMakerClient::updateMonitoringSchedule
 */

/*!
 * Constructs a UpdateMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMonitoringScheduleResponse::UpdateMonitoringScheduleResponse(
        const UpdateMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMonitoringScheduleRequest * UpdateMonitoringScheduleResponse::request() const
{
    Q_D(const UpdateMonitoringScheduleResponse);
    return static_cast<const UpdateMonitoringScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateMonitoringSchedule \a response.
 */
void UpdateMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateMonitoringScheduleResponsePrivate
 * \brief The UpdateMonitoringScheduleResponsePrivate class provides private implementation for UpdateMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
UpdateMonitoringScheduleResponsePrivate::UpdateMonitoringScheduleResponsePrivate(
    UpdateMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateMonitoringSchedule response element from \a xml.
 */
void UpdateMonitoringScheduleResponsePrivate::parseUpdateMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
