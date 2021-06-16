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

#include "listpublickeysrequest.h"
#include "listpublickeysrequest_p.h"
#include "listpublickeysresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::ListPublicKeysRequest
 * \brief The ListPublicKeysRequest class provides an interface for CloudTrail ListPublicKeys requests.
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
 * \sa CloudTrailClient::listPublicKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ListPublicKeysRequest::ListPublicKeysRequest(const ListPublicKeysRequest &other)
    : CloudTrailRequest(new ListPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPublicKeysRequest object.
 */
ListPublicKeysRequest::ListPublicKeysRequest()
    : CloudTrailRequest(new ListPublicKeysRequestPrivate(CloudTrailRequest::ListPublicKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListPublicKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPublicKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListPublicKeysResponse(*this, reply);
}

/*!
 * \class QtAws::CloudTrail::ListPublicKeysRequestPrivate
 * \brief The ListPublicKeysRequestPrivate class provides private implementation for ListPublicKeysRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a ListPublicKeysRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const CloudTrailRequest::Action action, ListPublicKeysRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPublicKeysRequest
 * class' copy constructor.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const ListPublicKeysRequestPrivate &other, ListPublicKeysRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
