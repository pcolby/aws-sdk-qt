// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrunrequest.h"
#include "canceljobrunrequest_p.h"
#include "canceljobrunresponse.h"
#include "emrserverlessrequest_p.h"

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::CancelJobRunRequest
 * \brief The CancelJobRunRequest class provides an interface for EmrServerless CancelJobRun requests.
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
 * \sa EmrServerlessClient::cancelJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRunRequest::CancelJobRunRequest(const CancelJobRunRequest &other)
    : EmrServerlessRequest(new CancelJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRunRequest object.
 */
CancelJobRunRequest::CancelJobRunRequest()
    : EmrServerlessRequest(new CancelJobRunRequestPrivate(EmrServerlessRequest::CancelJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRunRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::EmrServerless::CancelJobRunRequestPrivate
 * \brief The CancelJobRunRequestPrivate class provides private implementation for CancelJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a CancelJobRunRequestPrivate object for EmrServerless \a action,
 * with public implementation \a q.
 */
CancelJobRunRequestPrivate::CancelJobRunRequestPrivate(
    const EmrServerlessRequest::Action action, CancelJobRunRequest * const q)
    : EmrServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRunRequest
 * class' copy constructor.
 */
CancelJobRunRequestPrivate::CancelJobRunRequestPrivate(
    const CancelJobRunRequestPrivate &other, CancelJobRunRequest * const q)
    : EmrServerlessRequestPrivate(other, q)
{

}

} // namespace EmrServerless
} // namespace QtAws
