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

#include "createpartitionrequest.h"
#include "createpartitionrequest_p.h"
#include "createpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreatePartitionRequest
 * \brief The CreatePartitionRequest class provides an interface for Glue CreatePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createPartition
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePartitionRequest::CreatePartitionRequest(const CreatePartitionRequest &other)
    : GlueRequest(new CreatePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePartitionRequest object.
 */
CreatePartitionRequest::CreatePartitionRequest()
    : GlueRequest(new CreatePartitionRequestPrivate(GlueRequest::CreatePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreatePartitionRequestPrivate
 * \brief The CreatePartitionRequestPrivate class provides private implementation for CreatePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a CreatePartitionRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
CreatePartitionRequestPrivate::CreatePartitionRequestPrivate(
    const GlueRequest::Action action, CreatePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePartitionRequest
 * class' copy constructor.
 */
CreatePartitionRequestPrivate::CreatePartitionRequestPrivate(
    const CreatePartitionRequestPrivate &other, CreatePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
