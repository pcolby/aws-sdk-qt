/*
    Copyright 2013-2019 Paul Colby

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

#include "getpartitionsrequest.h"
#include "getpartitionsrequest_p.h"
#include "getpartitionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionsRequest
 * \brief The GetPartitionsRequest class provides an interface for Glue GetPartitions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getPartitions
 */

/*!
 * Constructs a copy of \a other.
 */
GetPartitionsRequest::GetPartitionsRequest(const GetPartitionsRequest &other)
    : GlueRequest(new GetPartitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPartitionsRequest object.
 */
GetPartitionsRequest::GetPartitionsRequest()
    : GlueRequest(new GetPartitionsRequestPrivate(GlueRequest::GetPartitionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetPartitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPartitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPartitionsRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetPartitionsRequestPrivate
 * \brief The GetPartitionsRequestPrivate class provides private implementation for GetPartitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GlueRequest::Action action, GetPartitionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionsRequest
 * class' copy constructor.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GetPartitionsRequestPrivate &other, GetPartitionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
