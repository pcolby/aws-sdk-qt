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

#include "cancelrotatesecretrequest.h"
#include "cancelrotatesecretrequest_p.h"
#include "cancelrotatesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::CancelRotateSecretRequest
 * \brief The CancelRotateSecretRequest class provides an interface for SecretsManager CancelRotateSecret requests.
 *
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>Amazon Web Services Secrets Manager</fullname>
 * 
 *  Amazon Web Services Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon Web Services Secrets Manager
 *  User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17>
 * 
 *  <b>Support and Feedback for Amazon Web Services Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services Secrets Manager
 *  Discussion Forum</a>. For more information about the Amazon Web Services Discussion Forums, see <a
 *  href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  Amazon Web Services Secrets Manager supports Amazon Web Services CloudTrail, a service that records Amazon Web Services
 *  API calls for your Amazon Web Services account and delivers log files to an Amazon S3 bucket. By using information
 *  that's collected by Amazon Web Services CloudTrail, you can determine the requests successfully made to Secrets Manager,
 *  who made the request, when it was made, and so on. For more about Amazon Web Services Secrets Manager and support for
 *  Amazon Web Services CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging Amazon
 *  Web Services Secrets Manager Events with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Secrets
 *  Manager User Guide</i>. To learn more about CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon Web Services
 *  CloudTrail User
 *
 * \sa SecretsManagerClient::cancelRotateSecret
 */

/*!
 * Constructs a copy of \a other.
 */
CancelRotateSecretRequest::CancelRotateSecretRequest(const CancelRotateSecretRequest &other)
    : SecretsManagerRequest(new CancelRotateSecretRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelRotateSecretRequest object.
 */
CancelRotateSecretRequest::CancelRotateSecretRequest()
    : SecretsManagerRequest(new CancelRotateSecretRequestPrivate(SecretsManagerRequest::CancelRotateSecretAction, this))
{

}

/*!
 * \reimp
 */
bool CancelRotateSecretRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelRotateSecretResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelRotateSecretRequest::response(QNetworkReply * const reply) const
{
    return new CancelRotateSecretResponse(*this, reply);
}

/*!
 * \class QtAws::SecretsManager::CancelRotateSecretRequestPrivate
 * \brief The CancelRotateSecretRequestPrivate class provides private implementation for CancelRotateSecretRequest.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a CancelRotateSecretRequestPrivate object for SecretsManager \a action,
 * with public implementation \a q.
 */
CancelRotateSecretRequestPrivate::CancelRotateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, CancelRotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelRotateSecretRequest
 * class' copy constructor.
 */
CancelRotateSecretRequestPrivate::CancelRotateSecretRequestPrivate(
    const CancelRotateSecretRequestPrivate &other, CancelRotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
