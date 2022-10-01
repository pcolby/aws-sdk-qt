// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutpostrequest.h"
#include "deleteoutpostrequest_p.h"
#include "deleteoutpostresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteOutpostRequest
 * \brief The DeleteOutpostRequest class provides an interface for Outposts DeleteOutpost requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::deleteOutpost
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOutpostRequest::DeleteOutpostRequest(const DeleteOutpostRequest &other)
    : OutpostsRequest(new DeleteOutpostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOutpostRequest object.
 */
DeleteOutpostRequest::DeleteOutpostRequest()
    : OutpostsRequest(new DeleteOutpostRequestPrivate(OutpostsRequest::DeleteOutpostAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOutpostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOutpostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOutpostRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOutpostResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::DeleteOutpostRequestPrivate
 * \brief The DeleteOutpostRequestPrivate class provides private implementation for DeleteOutpostRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteOutpostRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
DeleteOutpostRequestPrivate::DeleteOutpostRequestPrivate(
    const OutpostsRequest::Action action, DeleteOutpostRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOutpostRequest
 * class' copy constructor.
 */
DeleteOutpostRequestPrivate::DeleteOutpostRequestPrivate(
    const DeleteOutpostRequestPrivate &other, DeleteOutpostRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
