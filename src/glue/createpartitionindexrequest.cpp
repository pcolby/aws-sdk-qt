// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
