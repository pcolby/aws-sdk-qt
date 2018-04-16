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

#include "listprovisionedcapacityrequest.h"
#include "listprovisionedcapacityrequest_p.h"
#include "listprovisionedcapacityresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::ListProvisionedCapacityRequest
 *
 * \brief The ListProvisionedCapacityRequest class provides an interface for Glacier ListProvisionedCapacity requests.
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
 * \sa GlacierClient::listProvisionedCapacity
 */

/*!
 * @brief  Constructs a new ListProvisionedCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProvisionedCapacityRequest::ListProvisionedCapacityRequest(const ListProvisionedCapacityRequest &other)
    : GlacierRequest(new ListProvisionedCapacityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListProvisionedCapacityRequest object.
 */
ListProvisionedCapacityRequest::ListProvisionedCapacityRequest()
    : GlacierRequest(new ListProvisionedCapacityRequestPrivate(GlacierRequest::ListProvisionedCapacityAction, this))
{

}

/*!
 * \reimp
 */
bool ListProvisionedCapacityRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListProvisionedCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProvisionedCapacityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisionedCapacityRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisionedCapacityResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListProvisionedCapacityRequestPrivate
 *
 * @brief  Private implementation for ListProvisionedCapacityRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListProvisionedCapacityRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListProvisionedCapacityRequest instance.
 */
ListProvisionedCapacityRequestPrivate::ListProvisionedCapacityRequestPrivate(
    const GlacierRequest::Action action, ListProvisionedCapacityRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListProvisionedCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProvisionedCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProvisionedCapacityRequest instance.
 */
ListProvisionedCapacityRequestPrivate::ListProvisionedCapacityRequestPrivate(
    const ListProvisionedCapacityRequestPrivate &other, ListProvisionedCapacityRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
