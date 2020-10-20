/*
    Copyright 2013-2020 Paul Colby

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

#include "initiatevaultlockrequest.h"
#include "initiatevaultlockrequest_p.h"
#include "initiatevaultlockresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::InitiateVaultLockRequest
 * \brief The InitiateVaultLockRequest class provides an interface for Glacier InitiateVaultLock requests.
 *
 * \inmodule QtAwsGlacier
 *
 *  Amazon S3 Glacier (Glacier) is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data backup
 *  and archival. With Glacier, customers can store their data cost effectively for months, years, or decades. Glacier also
 *  enables customers to offload the administrative burdens of operating and scaling storage to AWS, so they don't have to
 *  worry about capacity planning, hardware provisioning, data replication, hardware failure and recovery, or time-consuming
 *  hardware
 * 
 *  migrations>
 * 
 *  Glacier is a great storage choice when low storage cost is paramount and your data is rarely retrieved. If your
 *  application requires fast or frequent access to your data, consider using Amazon S3. For more information, see <a
 *  href="http://aws.amazon.com/s3/">Amazon Simple Storage Service (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Glacier, we recommend that you begin by reading the following sections in the <i>Amazon
 *  S3 Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon S3 Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon S3 Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading
 *  archives, creating jobs to download archives, retrieving the job output, and deleting
 *
 * \sa GlacierClient::initiateVaultLock
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateVaultLockRequest::InitiateVaultLockRequest(const InitiateVaultLockRequest &other)
    : GlacierRequest(new InitiateVaultLockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateVaultLockRequest object.
 */
InitiateVaultLockRequest::InitiateVaultLockRequest()
    : GlacierRequest(new InitiateVaultLockRequestPrivate(GlacierRequest::InitiateVaultLockAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateVaultLockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitiateVaultLockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateVaultLockRequest::response(QNetworkReply * const reply) const
{
    return new InitiateVaultLockResponse(*this, reply);
}

/*!
 * \class QtAws::Glacier::InitiateVaultLockRequestPrivate
 * \brief The InitiateVaultLockRequestPrivate class provides private implementation for InitiateVaultLockRequest.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a InitiateVaultLockRequestPrivate object for Glacier \a action,
 * with public implementation \a q.
 */
InitiateVaultLockRequestPrivate::InitiateVaultLockRequestPrivate(
    const GlacierRequest::Action action, InitiateVaultLockRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateVaultLockRequest
 * class' copy constructor.
 */
InitiateVaultLockRequestPrivate::InitiateVaultLockRequestPrivate(
    const InitiateVaultLockRequestPrivate &other, InitiateVaultLockRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
