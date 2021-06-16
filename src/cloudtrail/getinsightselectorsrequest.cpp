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

#include "getinsightselectorsrequest.h"
#include "getinsightselectorsrequest_p.h"
#include "getinsightselectorsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::GetInsightSelectorsRequest
 * \brief The GetInsightSelectorsRequest class provides an interface for CloudTrail GetInsightSelectors requests.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 *
 * \sa CloudTrailClient::getInsightSelectors
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightSelectorsRequest::GetInsightSelectorsRequest(const GetInsightSelectorsRequest &other)
    : CloudTrailRequest(new GetInsightSelectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightSelectorsRequest object.
 */
GetInsightSelectorsRequest::GetInsightSelectorsRequest()
    : CloudTrailRequest(new GetInsightSelectorsRequestPrivate(CloudTrailRequest::GetInsightSelectorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightSelectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightSelectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightSelectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightSelectorsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudTrail::GetInsightSelectorsRequestPrivate
 * \brief The GetInsightSelectorsRequestPrivate class provides private implementation for GetInsightSelectorsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a GetInsightSelectorsRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
GetInsightSelectorsRequestPrivate::GetInsightSelectorsRequestPrivate(
    const CloudTrailRequest::Action action, GetInsightSelectorsRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightSelectorsRequest
 * class' copy constructor.
 */
GetInsightSelectorsRequestPrivate::GetInsightSelectorsRequestPrivate(
    const GetInsightSelectorsRequestPrivate &other, GetInsightSelectorsRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
