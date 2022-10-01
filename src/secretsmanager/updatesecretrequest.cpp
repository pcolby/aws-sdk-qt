// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesecretrequest.h"
#include "updatesecretrequest_p.h"
#include "updatesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::UpdateSecretRequest
 * \brief The UpdateSecretRequest class provides an interface for SecretsManager UpdateSecret requests.
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
 * \sa SecretsManagerClient::updateSecret
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSecretRequest::UpdateSecretRequest(const UpdateSecretRequest &other)
    : SecretsManagerRequest(new UpdateSecretRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSecretRequest object.
 */
UpdateSecretRequest::UpdateSecretRequest()
    : SecretsManagerRequest(new UpdateSecretRequestPrivate(SecretsManagerRequest::UpdateSecretAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSecretRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSecretResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecretRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecretResponse(*this, reply);
}

/*!
 * \class QtAws::SecretsManager::UpdateSecretRequestPrivate
 * \brief The UpdateSecretRequestPrivate class provides private implementation for UpdateSecretRequest.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a UpdateSecretRequestPrivate object for SecretsManager \a action,
 * with public implementation \a q.
 */
UpdateSecretRequestPrivate::UpdateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, UpdateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecretRequest
 * class' copy constructor.
 */
UpdateSecretRequestPrivate::UpdateSecretRequestPrivate(
    const UpdateSecretRequestPrivate &other, UpdateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
