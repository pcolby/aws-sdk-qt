/*
    Copyright 2013-2020 Paul Colby

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

#include "getclassifiersrequest.h"
#include "getclassifiersrequest_p.h"
#include "getclassifiersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifiersRequest
 * \brief The GetClassifiersRequest class provides an interface for Glue GetClassifiers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifiers
 */

/*!
 * Constructs a copy of \a other.
 */
GetClassifiersRequest::GetClassifiersRequest(const GetClassifiersRequest &other)
    : GlueRequest(new GetClassifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClassifiersRequest object.
 */
GetClassifiersRequest::GetClassifiersRequest()
    : GlueRequest(new GetClassifiersRequestPrivate(GlueRequest::GetClassifiersAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClassifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassifiersRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifiersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetClassifiersRequestPrivate
 * \brief The GetClassifiersRequestPrivate class provides private implementation for GetClassifiersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifiersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GlueRequest::Action action, GetClassifiersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClassifiersRequest
 * class' copy constructor.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GetClassifiersRequestPrivate &other, GetClassifiersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
