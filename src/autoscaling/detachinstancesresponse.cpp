// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachinstancesresponse.h"
#include "detachinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachInstancesResponse
 * \brief The DetachInstancesResponse class provides an interace for AutoScaling DetachInstances responses.
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
 * \sa AutoScalingClient::detachInstances
 */

/*!
 * Constructs a DetachInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DetachInstancesResponse::DetachInstancesResponse(
        const DetachInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DetachInstancesResponsePrivate(this), parent)
{
    setRequest(new DetachInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachInstancesRequest * DetachInstancesResponse::request() const
{
    Q_D(const DetachInstancesResponse);
    return static_cast<const DetachInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DetachInstances \a response.
 */
void DetachInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DetachInstancesResponsePrivate
 * \brief The DetachInstancesResponsePrivate class provides private implementation for DetachInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachInstancesResponsePrivate object with public implementation \a q.
 */
DetachInstancesResponsePrivate::DetachInstancesResponsePrivate(
    DetachInstancesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DetachInstances response element from \a xml.
 */
void DetachInstancesResponsePrivate::parseDetachInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
