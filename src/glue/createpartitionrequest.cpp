// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
 * Constructs a CreatePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
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
