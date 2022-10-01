// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablemetricscollectionresponse.h"
#include "enablemetricscollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionResponse
 * \brief The EnableMetricsCollectionResponse class provides an interace for AutoScaling EnableMetricsCollection responses.
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
 * \sa AutoScalingClient::enableMetricsCollection
 */

/*!
 * Constructs a EnableMetricsCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
EnableMetricsCollectionResponse::EnableMetricsCollectionResponse(
        const EnableMetricsCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new EnableMetricsCollectionResponsePrivate(this), parent)
{
    setRequest(new EnableMetricsCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableMetricsCollectionRequest * EnableMetricsCollectionResponse::request() const
{
    Q_D(const EnableMetricsCollectionResponse);
    return static_cast<const EnableMetricsCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling EnableMetricsCollection \a response.
 */
void EnableMetricsCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableMetricsCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionResponsePrivate
 * \brief The EnableMetricsCollectionResponsePrivate class provides private implementation for EnableMetricsCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnableMetricsCollectionResponsePrivate object with public implementation \a q.
 */
EnableMetricsCollectionResponsePrivate::EnableMetricsCollectionResponsePrivate(
    EnableMetricsCollectionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling EnableMetricsCollection response element from \a xml.
 */
void EnableMetricsCollectionResponsePrivate::parseEnableMetricsCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableMetricsCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
