// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
