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

#include "getmltransformsrequest.h"
#include "getmltransformsrequest_p.h"
#include "getmltransformsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformsRequest
 * \brief The GetMLTransformsRequest class provides an interface for Glue GetMLTransforms requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMLTransforms
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTransformsRequest::GetMLTransformsRequest(const GetMLTransformsRequest &other)
    : GlueRequest(new GetMLTransformsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTransformsRequest object.
 */
GetMLTransformsRequest::GetMLTransformsRequest()
    : GlueRequest(new GetMLTransformsRequestPrivate(GlueRequest::GetMLTransformsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTransformsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTransformsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTransformsRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTransformsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTransformsRequestPrivate
 * \brief The GetMLTransformsRequestPrivate class provides private implementation for GetMLTransformsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTransformsRequestPrivate::GetMLTransformsRequestPrivate(
    const GlueRequest::Action action, GetMLTransformsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTransformsRequest
 * class' copy constructor.
 */
GetMLTransformsRequestPrivate::GetMLTransformsRequestPrivate(
    const GetMLTransformsRequestPrivate &other, GetMLTransformsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
