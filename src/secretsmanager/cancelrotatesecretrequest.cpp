/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  <fullname>AWS Secrets Manager API Reference</fullname>
 * 
 *  AWS Secrets Manager is a web service that enables you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">AWS Secrets Manager User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17> <note>
 * 
 *  As an alternative to using the API directly, you can use one of the AWS SDKs, which consist of libraries and sample code
 *  for various programming languages and platforms (such as Java, Ruby, .NET, iOS, and Android). The SDKs provide a
 *  convenient way to create programmatic access to AWS Secrets Manager. For example, the SDKs take care of
 *  cryptographically signing requests, managing errors, and retrying requests automatically. For more information about the
 *  AWS SDKs, including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to Secrets Manager. However, you also can use the
 *  Secrets Manager HTTP Query API to make direct calls to the Secrets Manager web service. To learn more about the Secrets
 *  Manager HTTP Query API, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/query-requests.html">Making Query Requests</a> in the
 *  <i>AWS Secrets Manager User Guide</i>.
 * 
 *  </p
 * 
 *  Secrets Manager supports GET and POST requests for all actions. That is, the API doesn't require you to use GET for some
 *  actions and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for
 *  operations that require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Support and Feedback for AWS Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">AWS Secrets Manager Discussion Forum</a>.
 *  For more information about the AWS Discussion Forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON that AWS Secrets Manager expects as your request parameters and that the service returns as a response to HTTP
 *  query requests are single, long strings without line breaks or white space formatting. The JSON shown in the examples is
 *  formatted with both line breaks and white space to improve readability. When example input parameters would also result
 *  in long strings that extend beyond the screen, we insert line breaks to enhance readability. You should always submit
 *  the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS Secrets Manager supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information that's collected by AWS CloudTrail, you can determine which requests
 *  were successfully made to Secrets Manager, who made the request, when it was made, and so on. For more about AWS Secrets
 *  Manager and its support for AWS CloudTrail, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging AWS
 *  Secrets Manager Events with AWS CloudTrail</a> in the <i>AWS Secrets Manager User Guide</i>. To learn more about
 *  CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
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
