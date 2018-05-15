/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "executepolicyresponse.h"
#include "executepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExecutePolicyResponse
 * \brief The ExecutePolicyResponse class provides an interace for AutoScaling ExecutePolicy responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::executePolicy
 */

/*!
 * Constructs a ExecutePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
ExecutePolicyResponse::ExecutePolicyResponse(
        const ExecutePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new ExecutePolicyResponsePrivate(this), parent)
{
    setRequest(new ExecutePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecutePolicyRequest * ExecutePolicyResponse::request() const
{
    Q_D(const ExecutePolicyResponse);
    return static_cast<const ExecutePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling ExecutePolicy \a response.
 */
void ExecutePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecutePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::ExecutePolicyResponsePrivate
 * \brief The ExecutePolicyResponsePrivate class provides private implementation for ExecutePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExecutePolicyResponsePrivate object with public implementation \a q.
 */
ExecutePolicyResponsePrivate::ExecutePolicyResponsePrivate(
    ExecutePolicyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling ExecutePolicy response element from \a xml.
 */
void ExecutePolicyResponsePrivate::parseExecutePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecutePolicyResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
