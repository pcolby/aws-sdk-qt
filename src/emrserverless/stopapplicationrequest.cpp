// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationrequest.h"
#include "stopapplicationrequest_p.h"
#include "stopapplicationresponse.h"
#include "emrserverlessrequest_p.h"

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::StopApplicationRequest
 * \brief The StopApplicationRequest class provides an interface for EmrServerless StopApplication requests.
 *
 * \inmodule QtAwsEmrServerless
 *
 *  Amazon EMR Serverless is a new deployment option for Amazon EMR. EMR Serverless provides a serverless runtime
 *  environment that simplifies running analytics applications using the latest open source frameworks such as Apache Spark
 *  and Apache Hive. With EMR Serverless, you don’t have to configure, optimize, secure, or operate clusters to run
 *  applications with these
 * 
 *  frameworks>
 * 
 *  The API reference to Amazon EMR Serverless is <code>emr-serverless</code>. The <code>emr-serverless</code> prefix is
 *  used in the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR Serverless. For example, <code>aws emr-serverless
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR Serverless. For example, <code>"Action":
 *  ["emr-serverless:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR
 * 
 *  Serverless</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR Serverless service endpoints. For example,
 *
 * \sa EmrServerlessClient::stopApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StopApplicationRequest::StopApplicationRequest(const StopApplicationRequest &other)
    : EmrServerlessRequest(new StopApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopApplicationRequest object.
 */
StopApplicationRequest::StopApplicationRequest()
    : EmrServerlessRequest(new StopApplicationRequestPrivate(EmrServerlessRequest::StopApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StopApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::EmrServerless::StopApplicationRequestPrivate
 * \brief The StopApplicationRequestPrivate class provides private implementation for StopApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a StopApplicationRequestPrivate object for EmrServerless \a action,
 * with public implementation \a q.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const EmrServerlessRequest::Action action, StopApplicationRequest * const q)
    : EmrServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopApplicationRequest
 * class' copy constructor.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const StopApplicationRequestPrivate &other, StopApplicationRequest * const q)
    : EmrServerlessRequestPrivate(other, q)
{

}

} // namespace EmrServerless
} // namespace QtAws
