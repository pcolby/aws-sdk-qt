// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopimportrequest.h"
#include "stopimportrequest_p.h"
#include "stopimportresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::StopImportRequest
 * \brief The StopImportRequest class provides an interface for CloudTrail StopImport requests.
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
 * \sa CloudTrailClient::stopImport
 */

/*!
 * Constructs a copy of \a other.
 */
StopImportRequest::StopImportRequest(const StopImportRequest &other)
    : CloudTrailRequest(new StopImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopImportRequest object.
 */
StopImportRequest::StopImportRequest()
    : CloudTrailRequest(new StopImportRequestPrivate(CloudTrailRequest::StopImportAction, this))
{

}

/*!
 * \reimp
 */
bool StopImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopImportRequest::response(QNetworkReply * const reply) const
{
    return new StopImportResponse(*this, reply);
}

/*!
 * \class QtAws::CloudTrail::StopImportRequestPrivate
 * \brief The StopImportRequestPrivate class provides private implementation for StopImportRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a StopImportRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
StopImportRequestPrivate::StopImportRequestPrivate(
    const CloudTrailRequest::Action action, StopImportRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopImportRequest
 * class' copy constructor.
 */
StopImportRequestPrivate::StopImportRequestPrivate(
    const StopImportRequestPrivate &other, StopImportRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
