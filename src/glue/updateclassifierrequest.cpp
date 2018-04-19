/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateclassifierrequest.h"
#include "updateclassifierrequest_p.h"
#include "updateclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateClassifierRequest
 * \brief The UpdateClassifierRequest class provides an interface for Glue UpdateClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClassifierRequest::UpdateClassifierRequest(const UpdateClassifierRequest &other)
    : GlueRequest(new UpdateClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClassifierRequest object.
 */
UpdateClassifierRequest::UpdateClassifierRequest()
    : GlueRequest(new UpdateClassifierRequestPrivate(GlueRequest::UpdateClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateClassifierRequestPrivate
 * \brief The UpdateClassifierRequestPrivate class provides private implementation for UpdateClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const GlueRequest::Action action, UpdateClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClassifierRequest
 * class' copy constructor.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const UpdateClassifierRequestPrivate &other, UpdateClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
