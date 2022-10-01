// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmonitoringscheduleresponse.h"
#include "createmonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateMonitoringScheduleResponse
 * \brief The CreateMonitoringScheduleResponse class provides an interace for SageMaker CreateMonitoringSchedule responses.
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
 * \sa SageMakerClient::createMonitoringSchedule
 */

/*!
 * Constructs a CreateMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMonitoringScheduleResponse::CreateMonitoringScheduleResponse(
        const CreateMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new CreateMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMonitoringScheduleRequest * CreateMonitoringScheduleResponse::request() const
{
    Q_D(const CreateMonitoringScheduleResponse);
    return static_cast<const CreateMonitoringScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateMonitoringSchedule \a response.
 */
void CreateMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateMonitoringScheduleResponsePrivate
 * \brief The CreateMonitoringScheduleResponsePrivate class provides private implementation for CreateMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
CreateMonitoringScheduleResponsePrivate::CreateMonitoringScheduleResponsePrivate(
    CreateMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateMonitoringSchedule response element from \a xml.
 */
void CreateMonitoringScheduleResponsePrivate::parseCreateMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
