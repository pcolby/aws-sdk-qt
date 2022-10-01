// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const StartMonitoringScheduleResponse);
    return static_cast<const StartMonitoringScheduleRequest *>(d->request);
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
