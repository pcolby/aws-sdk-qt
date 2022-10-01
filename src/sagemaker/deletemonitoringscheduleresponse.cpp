// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemonitoringscheduleresponse.h"
#include "deletemonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteMonitoringScheduleResponse
 * \brief The DeleteMonitoringScheduleResponse class provides an interace for SageMaker DeleteMonitoringSchedule responses.
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
 * \sa SageMakerClient::deleteMonitoringSchedule
 */

/*!
 * Constructs a DeleteMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMonitoringScheduleResponse::DeleteMonitoringScheduleResponse(
        const DeleteMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new DeleteMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMonitoringScheduleRequest * DeleteMonitoringScheduleResponse::request() const
{
    Q_D(const DeleteMonitoringScheduleResponse);
    return static_cast<const DeleteMonitoringScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteMonitoringSchedule \a response.
 */
void DeleteMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteMonitoringScheduleResponsePrivate
 * \brief The DeleteMonitoringScheduleResponsePrivate class provides private implementation for DeleteMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
DeleteMonitoringScheduleResponsePrivate::DeleteMonitoringScheduleResponsePrivate(
    DeleteMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteMonitoringSchedule response element from \a xml.
 */
void DeleteMonitoringScheduleResponsePrivate::parseDeleteMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
