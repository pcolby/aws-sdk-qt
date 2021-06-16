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

#include "deleteclassifierrequest.h"
#include "deleteclassifierrequest_p.h"
#include "deleteclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteClassifierRequest
 * \brief The DeleteClassifierRequest class provides an interface for Glue DeleteClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClassifierRequest::DeleteClassifierRequest(const DeleteClassifierRequest &other)
    : GlueRequest(new DeleteClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClassifierRequest object.
 */
DeleteClassifierRequest::DeleteClassifierRequest()
    : GlueRequest(new DeleteClassifierRequestPrivate(GlueRequest::DeleteClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClassifierRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteClassifierRequestPrivate
 * \brief The DeleteClassifierRequestPrivate class provides private implementation for DeleteClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const GlueRequest::Action action, DeleteClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClassifierRequest
 * class' copy constructor.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const DeleteClassifierRequestPrivate &other, DeleteClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
