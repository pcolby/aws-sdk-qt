// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvaultsrequest.h"
#include "listvaultsrequest_p.h"
#include "listvaultsresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::ListVaultsRequest
 * \brief The ListVaultsRequest class provides an interface for Glacier ListVaults requests.
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
 * \sa GlacierClient::listVaults
 */

/*!
 * Constructs a copy of \a other.
 */
ListVaultsRequest::ListVaultsRequest(const ListVaultsRequest &other)
    : GlacierRequest(new ListVaultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVaultsRequest object.
 */
ListVaultsRequest::ListVaultsRequest()
    : GlacierRequest(new ListVaultsRequestPrivate(GlacierRequest::ListVaultsAction, this))
{

}

/*!
 * \reimp
 */
bool ListVaultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVaultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVaultsRequest::response(QNetworkReply * const reply) const
{
    return new ListVaultsResponse(*this, reply);
}

/*!
 * \class QtAws::Glacier::ListVaultsRequestPrivate
 * \brief The ListVaultsRequestPrivate class provides private implementation for ListVaultsRequest.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a ListVaultsRequestPrivate object for Glacier \a action,
 * with public implementation \a q.
 */
ListVaultsRequestPrivate::ListVaultsRequestPrivate(
    const GlacierRequest::Action action, ListVaultsRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVaultsRequest
 * class' copy constructor.
 */
ListVaultsRequestPrivate::ListVaultsRequestPrivate(
    const ListVaultsRequestPrivate &other, ListVaultsRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
