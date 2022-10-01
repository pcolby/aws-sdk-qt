// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablemetricscollectionresponse.h"
#include "disablemetricscollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionResponse
 * \brief The DisableMetricsCollectionResponse class provides an interace for AutoScaling DisableMetricsCollection responses.
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
 * \sa AutoScalingClient::disableMetricsCollection
 */

/*!
 * Constructs a DisableMetricsCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DisableMetricsCollectionResponse::DisableMetricsCollectionResponse(
        const DisableMetricsCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DisableMetricsCollectionResponsePrivate(this), parent)
{
    setRequest(new DisableMetricsCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableMetricsCollectionRequest * DisableMetricsCollectionResponse::request() const
{
    Q_D(const DisableMetricsCollectionResponse);
    return static_cast<const DisableMetricsCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DisableMetricsCollection \a response.
 */
void DisableMetricsCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableMetricsCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionResponsePrivate
 * \brief The DisableMetricsCollectionResponsePrivate class provides private implementation for DisableMetricsCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DisableMetricsCollectionResponsePrivate object with public implementation \a q.
 */
DisableMetricsCollectionResponsePrivate::DisableMetricsCollectionResponsePrivate(
    DisableMetricsCollectionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DisableMetricsCollection response element from \a xml.
 */
void DisableMetricsCollectionResponsePrivate::parseDisableMetricsCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableMetricsCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
