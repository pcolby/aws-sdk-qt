// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetjobbookmarkrequest.h"
#include "resetjobbookmarkrequest_p.h"
#include "resetjobbookmarkresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResetJobBookmarkRequest
 * \brief The ResetJobBookmarkRequest class provides an interface for Glue ResetJobBookmark requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::resetJobBookmark
 */

/*!
 * Constructs a copy of \a other.
 */
ResetJobBookmarkRequest::ResetJobBookmarkRequest(const ResetJobBookmarkRequest &other)
    : GlueRequest(new ResetJobBookmarkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetJobBookmarkRequest object.
 */
ResetJobBookmarkRequest::ResetJobBookmarkRequest()
    : GlueRequest(new ResetJobBookmarkRequestPrivate(GlueRequest::ResetJobBookmarkAction, this))
{

}

/*!
 * \reimp
 */
bool ResetJobBookmarkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetJobBookmarkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetJobBookmarkRequest::response(QNetworkReply * const reply) const
{
    return new ResetJobBookmarkResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ResetJobBookmarkRequestPrivate
 * \brief The ResetJobBookmarkRequestPrivate class provides private implementation for ResetJobBookmarkRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResetJobBookmarkRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ResetJobBookmarkRequestPrivate::ResetJobBookmarkRequestPrivate(
    const GlueRequest::Action action, ResetJobBookmarkRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetJobBookmarkRequest
 * class' copy constructor.
 */
ResetJobBookmarkRequestPrivate::ResetJobBookmarkRequestPrivate(
    const ResetJobBookmarkRequestPrivate &other, ResetJobBookmarkRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
