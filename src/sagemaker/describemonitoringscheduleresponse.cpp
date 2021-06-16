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

#include "describemonitoringscheduleresponse.h"
#include "describemonitoringscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeMonitoringScheduleResponse
 * \brief The DescribeMonitoringScheduleResponse class provides an interace for SageMaker DescribeMonitoringSchedule responses.
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
 * \sa SageMakerClient::describeMonitoringSchedule
 */

/*!
 * Constructs a DescribeMonitoringScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMonitoringScheduleResponse::DescribeMonitoringScheduleResponse(
        const DescribeMonitoringScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeMonitoringScheduleResponsePrivate(this), parent)
{
    setRequest(new DescribeMonitoringScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMonitoringScheduleRequest * DescribeMonitoringScheduleResponse::request() const
{
    Q_D(const DescribeMonitoringScheduleResponse);
    return static_cast<const DescribeMonitoringScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeMonitoringSchedule \a response.
 */
void DescribeMonitoringScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMonitoringScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeMonitoringScheduleResponsePrivate
 * \brief The DescribeMonitoringScheduleResponsePrivate class provides private implementation for DescribeMonitoringScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeMonitoringScheduleResponsePrivate object with public implementation \a q.
 */
DescribeMonitoringScheduleResponsePrivate::DescribeMonitoringScheduleResponsePrivate(
    DescribeMonitoringScheduleResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeMonitoringSchedule response element from \a xml.
 */
void DescribeMonitoringScheduleResponsePrivate::parseDescribeMonitoringScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMonitoringScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
