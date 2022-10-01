// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepartitionrequest.h"
#include "updatepartitionrequest_p.h"
#include "updatepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdatePartitionRequest
 * \brief The UpdatePartitionRequest class provides an interface for Glue UpdatePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updatePartition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePartitionRequest::UpdatePartitionRequest(const UpdatePartitionRequest &other)
    : GlueRequest(new UpdatePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePartitionRequest object.
 */
UpdatePartitionRequest::UpdatePartitionRequest()
    : GlueRequest(new UpdatePartitionRequestPrivate(GlueRequest::UpdatePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdatePartitionRequestPrivate
 * \brief The UpdatePartitionRequestPrivate class provides private implementation for UpdatePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdatePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdatePartitionRequestPrivate::UpdatePartitionRequestPrivate(
    const GlueRequest::Action action, UpdatePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePartitionRequest
 * class' copy constructor.
 */
UpdatePartitionRequestPrivate::UpdatePartitionRequestPrivate(
    const UpdatePartitionRequestPrivate &other, UpdatePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
