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

#include "publishfunctionrequest.h"
#include "publishfunctionrequest_p.h"
#include "publishfunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::PublishFunctionRequest
 * \brief The PublishFunctionRequest class provides an interface for CloudFront PublishFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::publishFunction
 */

/*!
 * Constructs a copy of \a other.
 */
PublishFunctionRequest::PublishFunctionRequest(const PublishFunctionRequest &other)
    : CloudFrontRequest(new PublishFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishFunctionRequest object.
 */
PublishFunctionRequest::PublishFunctionRequest()
    : CloudFrontRequest(new PublishFunctionRequestPrivate(CloudFrontRequest::PublishFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool PublishFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishFunctionRequest::response(QNetworkReply * const reply) const
{
    return new PublishFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::PublishFunctionRequestPrivate
 * \brief The PublishFunctionRequestPrivate class provides private implementation for PublishFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a PublishFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
PublishFunctionRequestPrivate::PublishFunctionRequestPrivate(
    const CloudFrontRequest::Action action, PublishFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishFunctionRequest
 * class' copy constructor.
 */
PublishFunctionRequestPrivate::PublishFunctionRequestPrivate(
    const PublishFunctionRequestPrivate &other, PublishFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
