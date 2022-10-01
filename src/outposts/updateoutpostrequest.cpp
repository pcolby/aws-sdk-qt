// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateoutpostrequest.h"
#include "updateoutpostrequest_p.h"
#include "updateoutpostresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateOutpostRequest
 * \brief The UpdateOutpostRequest class provides an interface for Outposts UpdateOutpost requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateOutpost
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOutpostRequest::UpdateOutpostRequest(const UpdateOutpostRequest &other)
    : OutpostsRequest(new UpdateOutpostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOutpostRequest object.
 */
UpdateOutpostRequest::UpdateOutpostRequest()
    : OutpostsRequest(new UpdateOutpostRequestPrivate(OutpostsRequest::UpdateOutpostAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOutpostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOutpostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOutpostRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOutpostResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::UpdateOutpostRequestPrivate
 * \brief The UpdateOutpostRequestPrivate class provides private implementation for UpdateOutpostRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateOutpostRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
UpdateOutpostRequestPrivate::UpdateOutpostRequestPrivate(
    const OutpostsRequest::Action action, UpdateOutpostRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOutpostRequest
 * class' copy constructor.
 */
UpdateOutpostRequestPrivate::UpdateOutpostRequestPrivate(
    const UpdateOutpostRequestPrivate &other, UpdateOutpostRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
