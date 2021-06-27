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
    return static_cast<const DeleteMonitoringScheduleRequest *>(SageMakerResponse::request());
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
