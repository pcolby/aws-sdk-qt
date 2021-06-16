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

#include "updatefunctionrequest.h"
#include "updatefunctionrequest_p.h"
#include "updatefunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFunctionRequest
 * \brief The UpdateFunctionRequest class provides an interface for CloudFront UpdateFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFunction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFunctionRequest::UpdateFunctionRequest(const UpdateFunctionRequest &other)
    : CloudFrontRequest(new UpdateFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFunctionRequest object.
 */
UpdateFunctionRequest::UpdateFunctionRequest()
    : CloudFrontRequest(new UpdateFunctionRequestPrivate(CloudFrontRequest::UpdateFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateFunctionRequestPrivate
 * \brief The UpdateFunctionRequestPrivate class provides private implementation for UpdateFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateFunctionRequestPrivate::UpdateFunctionRequestPrivate(
    const CloudFrontRequest::Action action, UpdateFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionRequest
 * class' copy constructor.
 */
UpdateFunctionRequestPrivate::UpdateFunctionRequestPrivate(
    const UpdateFunctionRequestPrivate &other, UpdateFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
