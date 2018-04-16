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

#include "rotateencryptionkeyrequest.h"
#include "rotateencryptionkeyrequest_p.h"
#include "rotateencryptionkeyresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RotateEncryptionKeyRequest
 *
 * \brief The RotateEncryptionKeyRequest class encapsulates Redshift RotateEncryptionKey requests.
 *
 * \ingroup Redshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 *  Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::rotateEncryptionKey
 */

/*!
 * @brief  Constructs a new RotateEncryptionKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RotateEncryptionKeyRequest::RotateEncryptionKeyRequest(const RotateEncryptionKeyRequest &other)
    : RedshiftRequest(new RotateEncryptionKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RotateEncryptionKeyRequest object.
 */
RotateEncryptionKeyRequest::RotateEncryptionKeyRequest()
    : RedshiftRequest(new RotateEncryptionKeyRequestPrivate(RedshiftRequest::RotateEncryptionKeyAction, this))
{

}

/*!
 * \reimp
 */
bool RotateEncryptionKeyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RotateEncryptionKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RotateEncryptionKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * RotateEncryptionKeyRequest::response(QNetworkReply * const reply) const
{
    return new RotateEncryptionKeyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RotateEncryptionKeyRequestPrivate
 *
 * @brief  Private implementation for RotateEncryptionKeyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RotateEncryptionKeyRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RotateEncryptionKeyRequest instance.
 */
RotateEncryptionKeyRequestPrivate::RotateEncryptionKeyRequestPrivate(
    const RedshiftRequest::Action action, RotateEncryptionKeyRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RotateEncryptionKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RotateEncryptionKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RotateEncryptionKeyRequest instance.
 */
RotateEncryptionKeyRequestPrivate::RotateEncryptionKeyRequestPrivate(
    const RotateEncryptionKeyRequestPrivate &other, RotateEncryptionKeyRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
