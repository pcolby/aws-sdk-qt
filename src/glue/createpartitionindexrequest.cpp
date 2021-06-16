/*
    Copyright 2013-2021 Paul Colby

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

#include "createpartitionindexrequest.h"
#include "createpartitionindexrequest_p.h"
#include "createpartitionindexresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreatePartitionIndexRequest
 * \brief The CreatePartitionIndexRequest class provides an interface for Glue CreatePartitionIndex requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createPartitionIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePartitionIndexRequest::CreatePartitionIndexRequest(const CreatePartitionIndexRequest &other)
    : GlueRequest(new CreatePartitionIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePartitionIndexRequest object.
 */
CreatePartitionIndexRequest::CreatePartitionIndexRequest()
    : GlueRequest(new CreatePartitionIndexRequestPrivate(GlueRequest::CreatePartitionIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePartitionIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePartitionIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePartitionIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreatePartitionIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreatePartitionIndexRequestPrivate
 * \brief The CreatePartitionIndexRequestPrivate class provides private implementation for CreatePartitionIndexRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreatePartitionIndexRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreatePartitionIndexRequestPrivate::CreatePartitionIndexRequestPrivate(
    const GlueRequest::Action action, CreatePartitionIndexRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePartitionIndexRequest
 * class' copy constructor.
 */
CreatePartitionIndexRequestPrivate::CreatePartitionIndexRequestPrivate(
    const CreatePartitionIndexRequestPrivate &other, CreatePartitionIndexRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
