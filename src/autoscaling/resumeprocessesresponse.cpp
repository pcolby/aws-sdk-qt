// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeprocessesresponse.h"
#include "resumeprocessesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ResumeProcessesResponse
 * \brief The ResumeProcessesResponse class provides an interace for AutoScaling ResumeProcesses responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::resumeProcesses
 */

/*!
 * Constructs a ResumeProcessesResponse object for \a reply to \a request, with parent \a parent.
 */
ResumeProcessesResponse::ResumeProcessesResponse(
        const ResumeProcessesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new ResumeProcessesResponsePrivate(this), parent)
{
    setRequest(new ResumeProcessesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResumeProcessesRequest * ResumeProcessesResponse::request() const
{
    Q_D(const ResumeProcessesResponse);
    return static_cast<const ResumeProcessesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling ResumeProcesses \a response.
 */
void ResumeProcessesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResumeProcessesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::ResumeProcessesResponsePrivate
 * \brief The ResumeProcessesResponsePrivate class provides private implementation for ResumeProcessesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ResumeProcessesResponsePrivate object with public implementation \a q.
 */
ResumeProcessesResponsePrivate::ResumeProcessesResponsePrivate(
    ResumeProcessesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling ResumeProcesses response element from \a xml.
 */
void ResumeProcessesResponsePrivate::parseResumeProcessesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResumeProcessesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
