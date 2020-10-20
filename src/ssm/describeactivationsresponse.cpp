/*
    Copyright 2013-2020 Paul Colby

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

#include "describeactivationsresponse.h"
#include "describeactivationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DescribeActivationsResponse
 * \brief The DescribeActivationsResponse class provides an interace for SSM DescribeActivations responses.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting Up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::describeActivations
 */

/*!
 * Constructs a DescribeActivationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeActivationsResponse::DescribeActivationsResponse(
        const DescribeActivationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DescribeActivationsResponsePrivate(this), parent)
{
    setRequest(new DescribeActivationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeActivationsRequest * DescribeActivationsResponse::request() const
{
    Q_D(const DescribeActivationsResponse);
    return static_cast<const DescribeActivationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM DescribeActivations \a response.
 */
void DescribeActivationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeActivationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::DescribeActivationsResponsePrivate
 * \brief The DescribeActivationsResponsePrivate class provides private implementation for DescribeActivationsResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a DescribeActivationsResponsePrivate object with public implementation \a q.
 */
DescribeActivationsResponsePrivate::DescribeActivationsResponsePrivate(
    DescribeActivationsResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM DescribeActivations response element from \a xml.
 */
void DescribeActivationsResponsePrivate::parseDescribeActivationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
