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

#include "generateembedurlforregistereduserrequest.h"
#include "generateembedurlforregistereduserrequest_p.h"
#include "generateembedurlforregistereduserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserRequest
 * \brief The GenerateEmbedUrlForRegisteredUserRequest class provides an interface for QuickSight GenerateEmbedUrlForRegisteredUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForRegisteredUser
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateEmbedUrlForRegisteredUserRequest::GenerateEmbedUrlForRegisteredUserRequest(const GenerateEmbedUrlForRegisteredUserRequest &other)
    : QuickSightRequest(new GenerateEmbedUrlForRegisteredUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserRequest object.
 */
GenerateEmbedUrlForRegisteredUserRequest::GenerateEmbedUrlForRegisteredUserRequest()
    : QuickSightRequest(new GenerateEmbedUrlForRegisteredUserRequestPrivate(QuickSightRequest::GenerateEmbedUrlForRegisteredUserAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateEmbedUrlForRegisteredUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateEmbedUrlForRegisteredUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateEmbedUrlForRegisteredUserRequest::response(QNetworkReply * const reply) const
{
    return new GenerateEmbedUrlForRegisteredUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserRequestPrivate
 * \brief The GenerateEmbedUrlForRegisteredUserRequestPrivate class provides private implementation for GenerateEmbedUrlForRegisteredUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GenerateEmbedUrlForRegisteredUserRequestPrivate::GenerateEmbedUrlForRegisteredUserRequestPrivate(
    const QuickSightRequest::Action action, GenerateEmbedUrlForRegisteredUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateEmbedUrlForRegisteredUserRequest
 * class' copy constructor.
 */
GenerateEmbedUrlForRegisteredUserRequestPrivate::GenerateEmbedUrlForRegisteredUserRequestPrivate(
    const GenerateEmbedUrlForRegisteredUserRequestPrivate &other, GenerateEmbedUrlForRegisteredUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
