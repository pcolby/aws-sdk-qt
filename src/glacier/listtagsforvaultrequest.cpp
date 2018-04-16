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

#include "listtagsforvaultrequest.h"
#include "listtagsforvaultrequest_p.h"
#include "listtagsforvaultresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::ListTagsForVaultRequest
 *
 * \brief The ListTagsForVaultRequest class provides an interface for Glacier ListTagsForVault requests.
 *
 * \ingroup Glacier
 *
 *  Amazon Glacier is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Amazon Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data
 *  backup and archival. With Amazon Glacier, customers can store their data cost effectively for months, years, or decades.
 *  Amazon Glacier also enables customers to offload the administrative burdens of operating and scaling storage to AWS, so
 *  they don't have to worry about capacity planning, hardware provisioning, data replication, hardware failure and
 *  recovery, or time-consuming hardware
 * 
 *  migrations>
 * 
 *  Amazon Glacier is a great storage choice when low storage cost is paramount, your data is rarely retrieved, and
 *  retrieval latency of several hours is acceptable. If your application requires fast or frequent access to your data,
 *  consider using Amazon S3. For more information, see <a href="http://aws.amazon.com/s3/">Amazon Simple Storage Service
 *  (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 *  Amazon
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Amazon Glacier, we recommend that you begin by reading the following sections in the
 *  <i>Amazon Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading archives,
 *  creating jobs to download archives, retrieving the job output, and deleting
 *
 * \sa GlacierClient::listTagsForVault
 */

/*!
 * @brief  Constructs a new ListTagsForVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForVaultRequest::ListTagsForVaultRequest(const ListTagsForVaultRequest &other)
    : GlacierRequest(new ListTagsForVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTagsForVaultRequest object.
 */
ListTagsForVaultRequest::ListTagsForVaultRequest()
    : GlacierRequest(new ListTagsForVaultRequestPrivate(GlacierRequest::ListTagsForVaultAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForVaultRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTagsForVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForVaultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForVaultRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForVaultResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTagsForVaultRequestPrivate
 *
 * @brief  Private implementation for ListTagsForVaultRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsForVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListTagsForVaultRequest instance.
 */
ListTagsForVaultRequestPrivate::ListTagsForVaultRequestPrivate(
    const GlacierRequest::Action action, ListTagsForVaultRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsForVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForVaultRequest instance.
 */
ListTagsForVaultRequestPrivate::ListTagsForVaultRequestPrivate(
    const ListTagsForVaultRequestPrivate &other, ListTagsForVaultRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
