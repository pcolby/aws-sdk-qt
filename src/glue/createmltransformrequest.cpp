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

#include "createmltransformrequest.h"
#include "createmltransformrequest_p.h"
#include "createmltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateMLTransformRequest
 * \brief The CreateMLTransformRequest class provides an interface for Glue CreateMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMLTransformRequest::CreateMLTransformRequest(const CreateMLTransformRequest &other)
    : GlueRequest(new CreateMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMLTransformRequest object.
 */
CreateMLTransformRequest::CreateMLTransformRequest()
    : GlueRequest(new CreateMLTransformRequestPrivate(GlueRequest::CreateMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new CreateMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateMLTransformRequestPrivate
 * \brief The CreateMLTransformRequestPrivate class provides private implementation for CreateMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateMLTransformRequestPrivate::CreateMLTransformRequestPrivate(
    const GlueRequest::Action action, CreateMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMLTransformRequest
 * class' copy constructor.
 */
CreateMLTransformRequestPrivate::CreateMLTransformRequestPrivate(
    const CreateMLTransformRequestPrivate &other, CreateMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
