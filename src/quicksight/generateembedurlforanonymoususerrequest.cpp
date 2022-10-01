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

#include "generateembedurlforanonymoususerrequest.h"
#include "generateembedurlforanonymoususerrequest_p.h"
#include "generateembedurlforanonymoususerresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserRequest
 * \brief The GenerateEmbedUrlForAnonymousUserRequest class provides an interface for QuickSight GenerateEmbedUrlForAnonymousUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForAnonymousUser
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateEmbedUrlForAnonymousUserRequest::GenerateEmbedUrlForAnonymousUserRequest(const GenerateEmbedUrlForAnonymousUserRequest &other)
    : QuickSightRequest(new GenerateEmbedUrlForAnonymousUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserRequest object.
 */
GenerateEmbedUrlForAnonymousUserRequest::GenerateEmbedUrlForAnonymousUserRequest()
    : QuickSightRequest(new GenerateEmbedUrlForAnonymousUserRequestPrivate(QuickSightRequest::GenerateEmbedUrlForAnonymousUserAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateEmbedUrlForAnonymousUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateEmbedUrlForAnonymousUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateEmbedUrlForAnonymousUserRequest::response(QNetworkReply * const reply) const
{
    return new GenerateEmbedUrlForAnonymousUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserRequestPrivate
 * \brief The GenerateEmbedUrlForAnonymousUserRequestPrivate class provides private implementation for GenerateEmbedUrlForAnonymousUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GenerateEmbedUrlForAnonymousUserRequestPrivate::GenerateEmbedUrlForAnonymousUserRequestPrivate(
    const QuickSightRequest::Action action, GenerateEmbedUrlForAnonymousUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateEmbedUrlForAnonymousUserRequest
 * class' copy constructor.
 */
GenerateEmbedUrlForAnonymousUserRequestPrivate::GenerateEmbedUrlForAnonymousUserRequestPrivate(
    const GenerateEmbedUrlForAnonymousUserRequestPrivate &other, GenerateEmbedUrlForAnonymousUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
