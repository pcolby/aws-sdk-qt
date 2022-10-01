// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "suspendprocessesresponse.h"
#include "suspendprocessesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SuspendProcessesResponse
 * \brief The SuspendProcessesResponse class provides an interace for AutoScaling SuspendProcesses responses.
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
 * \sa AutoScalingClient::suspendProcesses
 */

/*!
 * Constructs a SuspendProcessesResponse object for \a reply to \a request, with parent \a parent.
 */
SuspendProcessesResponse::SuspendProcessesResponse(
        const SuspendProcessesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SuspendProcessesResponsePrivate(this), parent)
{
    setRequest(new SuspendProcessesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SuspendProcessesRequest * SuspendProcessesResponse::request() const
{
    Q_D(const SuspendProcessesResponse);
    return static_cast<const SuspendProcessesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling SuspendProcesses \a response.
 */
void SuspendProcessesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SuspendProcessesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::SuspendProcessesResponsePrivate
 * \brief The SuspendProcessesResponsePrivate class provides private implementation for SuspendProcessesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SuspendProcessesResponsePrivate object with public implementation \a q.
 */
SuspendProcessesResponsePrivate::SuspendProcessesResponsePrivate(
    SuspendProcessesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling SuspendProcesses response element from \a xml.
 */
void SuspendProcessesResponsePrivate::parseSuspendProcessesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuspendProcessesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
