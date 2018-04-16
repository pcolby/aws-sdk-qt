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

#include "putattributesrequest.h"
#include "putattributesrequest_p.h"
#include "putattributesresponse.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::PutAttributesRequest
 *
 * \brief The PutAttributesRequest class provides an interface for SimpleDB PutAttributes requests.
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
 * \sa SimpleDBClient::putAttributes
 */

/*!
 * @brief  Constructs a new PutAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutAttributesRequest::PutAttributesRequest(const PutAttributesRequest &other)
    : SimpleDBRequest(new PutAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutAttributesRequest object.
 */
PutAttributesRequest::PutAttributesRequest()
    : SimpleDBRequest(new PutAttributesRequestPrivate(SimpleDBRequest::PutAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutAttributesRequestPrivate
 *
 * @brief  Private implementation for PutAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutAttributesRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public PutAttributesRequest instance.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const SimpleDBRequest::Action action, PutAttributesRequest * const q)
    : SimpleDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutAttributesRequest instance.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const PutAttributesRequestPrivate &other, PutAttributesRequest * const q)
    : SimpleDBRequestPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace QtAws
