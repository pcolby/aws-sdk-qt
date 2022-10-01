// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventdatastoresrequest.h"
#include "listeventdatastoresrequest_p.h"
#include "listeventdatastoresresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::ListEventDataStoresRequest
 * \brief The ListEventDataStoresRequest class provides an interface for CloudTrail ListEventDataStores requests.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records Amazon Web Services API calls for your Amazon Web Services account and delivers
 *  log files to an Amazon S3 bucket. The recorded information includes the identity of the user, the start time of the
 *  Amazon Web Services API call, the source IP address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the Amazon Web Services SDKs, which consist of libraries and sample
 *  code for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide
 *  programmatic access to CloudTrail. For example, the SDKs handle cryptographically signing requests, managing errors, and
 *  retrying requests automatically. For more information about the Amazon Web Services SDKs, including how to download and
 *  install them, see <a href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail User
 *  Guide</a> for information about the data that is included with each Amazon Web Services API call listed in the log
 *
 * \sa CloudTrailClient::listEventDataStores
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventDataStoresRequest::ListEventDataStoresRequest(const ListEventDataStoresRequest &other)
    : CloudTrailRequest(new ListEventDataStoresRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventDataStoresRequest object.
 */
ListEventDataStoresRequest::ListEventDataStoresRequest()
    : CloudTrailRequest(new ListEventDataStoresRequestPrivate(CloudTrailRequest::ListEventDataStoresAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventDataStoresRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventDataStoresResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventDataStoresRequest::response(QNetworkReply * const reply) const
{
    return new ListEventDataStoresResponse(*this, reply);
}

/*!
 * \class QtAws::CloudTrail::ListEventDataStoresRequestPrivate
 * \brief The ListEventDataStoresRequestPrivate class provides private implementation for ListEventDataStoresRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a ListEventDataStoresRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
ListEventDataStoresRequestPrivate::ListEventDataStoresRequestPrivate(
    const CloudTrailRequest::Action action, ListEventDataStoresRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventDataStoresRequest
 * class' copy constructor.
 */
ListEventDataStoresRequestPrivate::ListEventDataStoresRequestPrivate(
    const ListEventDataStoresRequestPrivate &other, ListEventDataStoresRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
