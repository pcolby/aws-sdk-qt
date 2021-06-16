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

#include "updatemltransformrequest.h"
#include "updatemltransformrequest_p.h"
#include "updatemltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateMLTransformRequest
 * \brief The UpdateMLTransformRequest class provides an interface for Glue UpdateMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMLTransformRequest::UpdateMLTransformRequest(const UpdateMLTransformRequest &other)
    : GlueRequest(new UpdateMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMLTransformRequest object.
 */
UpdateMLTransformRequest::UpdateMLTransformRequest()
    : GlueRequest(new UpdateMLTransformRequestPrivate(GlueRequest::UpdateMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateMLTransformRequestPrivate
 * \brief The UpdateMLTransformRequestPrivate class provides private implementation for UpdateMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateMLTransformRequestPrivate::UpdateMLTransformRequestPrivate(
    const GlueRequest::Action action, UpdateMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMLTransformRequest
 * class' copy constructor.
 */
UpdateMLTransformRequestPrivate::UpdateMLTransformRequestPrivate(
    const UpdateMLTransformRequestPrivate &other, UpdateMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
