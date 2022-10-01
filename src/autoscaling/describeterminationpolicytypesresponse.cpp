// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeterminationpolicytypesresponse.h"
#include "describeterminationpolicytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesResponse
 * \brief The DescribeTerminationPolicyTypesResponse class provides an interace for AutoScaling DescribeTerminationPolicyTypes responses.
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
 * \sa AutoScalingClient::describeTerminationPolicyTypes
 */

/*!
 * Constructs a DescribeTerminationPolicyTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTerminationPolicyTypesResponse::DescribeTerminationPolicyTypesResponse(
        const DescribeTerminationPolicyTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeTerminationPolicyTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeTerminationPolicyTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTerminationPolicyTypesRequest * DescribeTerminationPolicyTypesResponse::request() const
{
    Q_D(const DescribeTerminationPolicyTypesResponse);
    return static_cast<const DescribeTerminationPolicyTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeTerminationPolicyTypes \a response.
 */
void DescribeTerminationPolicyTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTerminationPolicyTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesResponsePrivate
 * \brief The DescribeTerminationPolicyTypesResponsePrivate class provides private implementation for DescribeTerminationPolicyTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeTerminationPolicyTypesResponsePrivate object with public implementation \a q.
 */
DescribeTerminationPolicyTypesResponsePrivate::DescribeTerminationPolicyTypesResponsePrivate(
    DescribeTerminationPolicyTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeTerminationPolicyTypes response element from \a xml.
 */
void DescribeTerminationPolicyTypesResponsePrivate::parseDescribeTerminationPolicyTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTerminationPolicyTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
