// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewarmpoolresponse.h"
#include "deletewarmpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteWarmPoolResponse
 * \brief The DeleteWarmPoolResponse class provides an interace for AutoScaling DeleteWarmPool responses.
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
 * \sa AutoScalingClient::deleteWarmPool
 */

/*!
 * Constructs a DeleteWarmPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWarmPoolResponse::DeleteWarmPoolResponse(
        const DeleteWarmPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteWarmPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteWarmPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWarmPoolRequest * DeleteWarmPoolResponse::request() const
{
    Q_D(const DeleteWarmPoolResponse);
    return static_cast<const DeleteWarmPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteWarmPool \a response.
 */
void DeleteWarmPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWarmPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteWarmPoolResponsePrivate
 * \brief The DeleteWarmPoolResponsePrivate class provides private implementation for DeleteWarmPoolResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteWarmPoolResponsePrivate object with public implementation \a q.
 */
DeleteWarmPoolResponsePrivate::DeleteWarmPoolResponsePrivate(
    DeleteWarmPoolResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteWarmPool response element from \a xml.
 */
void DeleteWarmPoolResponsePrivate::parseDeleteWarmPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWarmPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
