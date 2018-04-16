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

#include "createkeyrequest.h"
#include "createkeyrequest_p.h"
#include "createkeyresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/*!
 * \class QtAws::KMS::CreateKeyRequest
 *
 * \brief The CreateKeyRequest class provides an interface for KMS CreateKey requests.
 *
 * \ingroup KMS
 *
 *  <fullname>AWS Key Management Service</fullname>
 * 
 *  AWS Key Management Service (AWS KMS) is an encryption and key management web service. This guide describes the AWS KMS
 *  operations that you can call programmatically. For general information about AWS KMS, see the <a
 *  href="http://docs.aws.amazon.com/kms/latest/developerguide/">AWS Key Management Service Developer
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS KMS and other AWS
 *  services. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying
 *  requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to AWS
 * 
 *  KMS>
 * 
 *  Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites
 *  with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman
 *  (ECDHE). Most modern systems such as Java 7 and later support these
 * 
 *  modes>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 *  use your AWS account (root) access key ID and secret key for everyday work with AWS KMS. Instead, use the access key ID
 *  and secret access key for an IAM user, or you can use the AWS Security Token Service to generate temporary security
 *  credentials that you can use to sign
 * 
 *  requests>
 * 
 *  All AWS KMS operations require <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 *  Version
 * 
 *  4</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS KMS supports AWS CloudTrail, a service that logs AWS API calls and related events for your AWS account and delivers
 *  them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what
 *  requests were made to AWS KMS, who made the request, when it was made, and so on. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS CloudTrail User
 * 
 *  Guide</a>>
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information about credentials and request signing, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a> - This
 *  topic provides general information about the types of credentials used for accessing
 * 
 *  AWS> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a> -
 *  This section of the <i>IAM User Guide</i> describes how to create and use temporary security
 * 
 *  credentials> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>
 *  - This set of topics walks you through the process of signing a request using an access key ID and a secret access
 * 
 *  key> </li> </ul>
 * 
 *  <b>Commonly Used APIs</b>
 * 
 *  </p
 * 
 *  Of the APIs discussed in this guide, the following will prove the most useful for most applications. You will likely
 *  perform actions other than these, such as creating keys and assigning policies, by using the
 * 
 *  console> <ul> <li>
 * 
 *  <a>Encrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>Decrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKey</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKeyWithoutPlaintext</a>
 *
 * \sa KMSClient::createKey
 */

/*!
 * @brief  Constructs a new CreateKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateKeyRequest::CreateKeyRequest(const CreateKeyRequest &other)
    : KMSRequest(new CreateKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateKeyRequest object.
 */
CreateKeyRequest::CreateKeyRequest()
    : KMSRequest(new CreateKeyRequestPrivate(KMSRequest::CreateKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateKeyRequestPrivate
 *
 * @brief  Private implementation for CreateKeyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateKeyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public CreateKeyRequest instance.
 */
CreateKeyRequestPrivate::CreateKeyRequestPrivate(
    const KMSRequest::Action action, CreateKeyRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateKeyRequest instance.
 */
CreateKeyRequestPrivate::CreateKeyRequestPrivate(
    const CreateKeyRequestPrivate &other, CreateKeyRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
