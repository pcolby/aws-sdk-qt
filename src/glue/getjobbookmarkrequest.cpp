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
