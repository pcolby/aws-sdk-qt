/*
    Copyright 2013-2021 Paul Colby

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

#include "describeresiliencypolicyresponse.h"
#include "describeresiliencypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeResiliencyPolicyResponse
 * \brief The DescribeResiliencyPolicyResponse class provides an interace for ResilienceHub DescribeResiliencyPolicy responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeResiliencyPolicy
 */

/*!
 * Constructs a DescribeResiliencyPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResiliencyPolicyResponse::DescribeResiliencyPolicyResponse(
        const DescribeResiliencyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeResiliencyPolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeResiliencyPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResiliencyPolicyRequest * DescribeResiliencyPolicyResponse::request() const
{
    Q_D(const DescribeResiliencyPolicyResponse);
    return static_cast<const DescribeResiliencyPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeResiliencyPolicy \a response.
 */
void DescribeResiliencyPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResiliencyPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeResiliencyPolicyResponsePrivate
 * \brief The DescribeResiliencyPolicyResponsePrivate class provides private implementation for DescribeResiliencyPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeResiliencyPolicyResponsePrivate object with public implementation \a q.
 */
DescribeResiliencyPolicyResponsePrivate::DescribeResiliencyPolicyResponsePrivate(
    DescribeResiliencyPolicyResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeResiliencyPolicy response element from \a xml.
 */
void DescribeResiliencyPolicyResponsePrivate::parseDescribeResiliencyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResiliencyPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
