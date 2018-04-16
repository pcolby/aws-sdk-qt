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

#include "domainmetadatarequest.h"
#include "domainmetadatarequest_p.h"
#include "domainmetadataresponse.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::DomainMetadataRequest
 *
 * \brief The DomainMetadataRequest class provides an interface for SimpleDB DomainMetadata requests.
 *
 * \ingroup SimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 *
 * \sa SimpleDBClient::domainMetadata
 */

/*!
 * @brief  Constructs a new DomainMetadataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DomainMetadataRequest::DomainMetadataRequest(const DomainMetadataRequest &other)
    : SimpleDBRequest(new DomainMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DomainMetadataRequest object.
 */
DomainMetadataRequest::DomainMetadataRequest()
    : SimpleDBRequest(new DomainMetadataRequestPrivate(SimpleDBRequest::DomainMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool DomainMetadataRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DomainMetadataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DomainMetadataResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
QtAws::Core::AwsAbstractResponse * DomainMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DomainMetadataResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DomainMetadataRequestPrivate
 *
 * @brief  Private implementation for DomainMetadataRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DomainMetadataRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public DomainMetadataRequest instance.
 */
DomainMetadataRequestPrivate::DomainMetadataRequestPrivate(
    const SimpleDBRequest::Action action, DomainMetadataRequest * const q)
    : SimpleDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DomainMetadataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DomainMetadataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DomainMetadataRequest instance.
 */
DomainMetadataRequestPrivate::DomainMetadataRequestPrivate(
    const DomainMetadataRequestPrivate &other, DomainMetadataRequest * const q)
    : SimpleDBRequestPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace QtAws
