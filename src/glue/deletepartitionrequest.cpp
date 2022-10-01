// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepartitionrequest.h"
#include "deletepartitionrequest_p.h"
#include "deletepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionRequest
 * \brief The DeletePartitionRequest class provides an interface for Glue DeletePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deletePartition
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePartitionRequest::DeletePartitionRequest(const DeletePartitionRequest &other)
    : GlueRequest(new DeletePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePartitionRequest object.
 */
DeletePartitionRequest::DeletePartitionRequest()
    : GlueRequest(new DeletePartitionRequestPrivate(GlueRequest::DeletePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePartitionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeletePartitionRequestPrivate
 * \brief The DeletePartitionRequestPrivate class provides private implementation for DeletePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const GlueRequest::Action action, DeletePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePartitionRequest
 * class' copy constructor.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const DeletePartitionRequestPrivate &other, DeletePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
