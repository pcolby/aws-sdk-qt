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

#include "createfunctionrequest.h"
#include "createfunctionrequest_p.h"
#include "createfunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFunctionRequest
 * \brief The CreateFunctionRequest class provides an interface for CloudFront CreateFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFunction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionRequest::CreateFunctionRequest(const CreateFunctionRequest &other)
    : CloudFrontRequest(new CreateFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionRequest object.
 */
CreateFunctionRequest::CreateFunctionRequest()
    : CloudFrontRequest(new CreateFunctionRequestPrivate(CloudFrontRequest::CreateFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateFunctionRequestPrivate
 * \brief The CreateFunctionRequestPrivate class provides private implementation for CreateFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const CloudFrontRequest::Action action, CreateFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionRequest
 * class' copy constructor.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const CreateFunctionRequestPrivate &other, CreateFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
