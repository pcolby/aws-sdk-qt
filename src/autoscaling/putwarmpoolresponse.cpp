// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putwarmpoolresponse.h"
#include "putwarmpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutWarmPoolResponse
 * \brief The PutWarmPoolResponse class provides an interace for AutoScaling PutWarmPool responses.
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
 * \sa AutoScalingClient::putWarmPool
 */

/*!
 * Constructs a PutWarmPoolResponse object for \a reply to \a request, with parent \a parent.
 */
PutWarmPoolResponse::PutWarmPoolResponse(
        const PutWarmPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutWarmPoolResponsePrivate(this), parent)
{
    setRequest(new PutWarmPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutWarmPoolRequest * PutWarmPoolResponse::request() const
{
    Q_D(const PutWarmPoolResponse);
    return static_cast<const PutWarmPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutWarmPool \a response.
 */
void PutWarmPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutWarmPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutWarmPoolResponsePrivate
 * \brief The PutWarmPoolResponsePrivate class provides private implementation for PutWarmPoolResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutWarmPoolResponsePrivate object with public implementation \a q.
 */
PutWarmPoolResponsePrivate::PutWarmPoolResponsePrivate(
    PutWarmPoolResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutWarmPool response element from \a xml.
 */
void PutWarmPoolResponsePrivate::parsePutWarmPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutWarmPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
