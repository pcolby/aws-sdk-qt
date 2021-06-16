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

#include "listmltransformsrequest.h"
#include "listmltransformsrequest_p.h"
#include "listmltransformsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListMLTransformsRequest
 * \brief The ListMLTransformsRequest class provides an interface for Glue ListMLTransforms requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listMLTransforms
 */

/*!
 * Constructs a copy of \a other.
 */
ListMLTransformsRequest::ListMLTransformsRequest(const ListMLTransformsRequest &other)
    : GlueRequest(new ListMLTransformsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMLTransformsRequest object.
 */
ListMLTransformsRequest::ListMLTransformsRequest()
    : GlueRequest(new ListMLTransformsRequestPrivate(GlueRequest::ListMLTransformsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMLTransformsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMLTransformsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMLTransformsRequest::response(QNetworkReply * const reply) const
{
    return new ListMLTransformsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListMLTransformsRequestPrivate
 * \brief The ListMLTransformsRequestPrivate class provides private implementation for ListMLTransformsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListMLTransformsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListMLTransformsRequestPrivate::ListMLTransformsRequestPrivate(
    const GlueRequest::Action action, ListMLTransformsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMLTransformsRequest
 * class' copy constructor.
 */
ListMLTransformsRequestPrivate::ListMLTransformsRequestPrivate(
    const ListMLTransformsRequestPrivate &other, ListMLTransformsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
