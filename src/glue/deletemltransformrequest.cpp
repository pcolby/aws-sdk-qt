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

#include "deletemltransformrequest.h"
#include "deletemltransformrequest_p.h"
#include "deletemltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteMLTransformRequest
 * \brief The DeleteMLTransformRequest class provides an interface for Glue DeleteMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMLTransformRequest::DeleteMLTransformRequest(const DeleteMLTransformRequest &other)
    : GlueRequest(new DeleteMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMLTransformRequest object.
 */
DeleteMLTransformRequest::DeleteMLTransformRequest()
    : GlueRequest(new DeleteMLTransformRequestPrivate(GlueRequest::DeleteMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteMLTransformRequestPrivate
 * \brief The DeleteMLTransformRequestPrivate class provides private implementation for DeleteMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteMLTransformRequestPrivate::DeleteMLTransformRequestPrivate(
    const GlueRequest::Action action, DeleteMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMLTransformRequest
 * class' copy constructor.
 */
DeleteMLTransformRequestPrivate::DeleteMLTransformRequestPrivate(
    const DeleteMLTransformRequestPrivate &other, DeleteMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
