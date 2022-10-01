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
