// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
