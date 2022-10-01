// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelinstancerefreshresponse.h"
#include "cancelinstancerefreshresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CancelInstanceRefreshResponse
 * \brief The CancelInstanceRefreshResponse class provides an interace for AutoScaling CancelInstanceRefresh responses.
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
 * \sa AutoScalingClient::cancelInstanceRefresh
 */

/*!
 * Constructs a CancelInstanceRefreshResponse object for \a reply to \a request, with parent \a parent.
 */
CancelInstanceRefreshResponse::CancelInstanceRefreshResponse(
        const CancelInstanceRefreshRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CancelInstanceRefreshResponsePrivate(this), parent)
{
    setRequest(new CancelInstanceRefreshRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelInstanceRefreshRequest * CancelInstanceRefreshResponse::request() const
{
    Q_D(const CancelInstanceRefreshResponse);
    return static_cast<const CancelInstanceRefreshRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CancelInstanceRefresh \a response.
 */
void CancelInstanceRefreshResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelInstanceRefreshResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CancelInstanceRefreshResponsePrivate
 * \brief The CancelInstanceRefreshResponsePrivate class provides private implementation for CancelInstanceRefreshResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CancelInstanceRefreshResponsePrivate object with public implementation \a q.
 */
CancelInstanceRefreshResponsePrivate::CancelInstanceRefreshResponsePrivate(
    CancelInstanceRefreshResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CancelInstanceRefresh response element from \a xml.
 */
void CancelInstanceRefreshResponsePrivate::parseCancelInstanceRefreshResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelInstanceRefreshResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
