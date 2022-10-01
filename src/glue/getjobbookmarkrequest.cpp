// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobbookmarkrequest.h"
#include "getjobbookmarkrequest_p.h"
#include "getjobbookmarkresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobBookmarkRequest
 * \brief The GetJobBookmarkRequest class provides an interface for Glue GetJobBookmark requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobBookmark
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobBookmarkRequest::GetJobBookmarkRequest(const GetJobBookmarkRequest &other)
    : GlueRequest(new GetJobBookmarkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobBookmarkRequest object.
 */
GetJobBookmarkRequest::GetJobBookmarkRequest()
    : GlueRequest(new GetJobBookmarkRequestPrivate(GlueRequest::GetJobBookmarkAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobBookmarkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobBookmarkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobBookmarkRequest::response(QNetworkReply * const reply) const
{
    return new GetJobBookmarkResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobBookmarkRequestPrivate
 * \brief The GetJobBookmarkRequestPrivate class provides private implementation for GetJobBookmarkRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobBookmarkRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobBookmarkRequestPrivate::GetJobBookmarkRequestPrivate(
    const GlueRequest::Action action, GetJobBookmarkRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobBookmarkRequest
 * class' copy constructor.
 */
GetJobBookmarkRequestPrivate::GetJobBookmarkRequestPrivate(
    const GetJobBookmarkRequestPrivate &other, GetJobBookmarkRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
