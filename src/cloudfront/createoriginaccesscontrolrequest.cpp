// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoriginaccesscontrolrequest.h"
#include "createoriginaccesscontrolrequest_p.h"
#include "createoriginaccesscontrolresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateOriginAccessControlRequest
 * \brief The CreateOriginAccessControlRequest class provides an interface for CloudFront CreateOriginAccessControl requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createOriginAccessControl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOriginAccessControlRequest::CreateOriginAccessControlRequest(const CreateOriginAccessControlRequest &other)
    : CloudFrontRequest(new CreateOriginAccessControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOriginAccessControlRequest object.
 */
CreateOriginAccessControlRequest::CreateOriginAccessControlRequest()
    : CloudFrontRequest(new CreateOriginAccessControlRequestPrivate(CloudFrontRequest::CreateOriginAccessControlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOriginAccessControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOriginAccessControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOriginAccessControlRequest::response(QNetworkReply * const reply) const
{
    return new CreateOriginAccessControlResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateOriginAccessControlRequestPrivate
 * \brief The CreateOriginAccessControlRequestPrivate class provides private implementation for CreateOriginAccessControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateOriginAccessControlRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateOriginAccessControlRequestPrivate::CreateOriginAccessControlRequestPrivate(
    const CloudFrontRequest::Action action, CreateOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOriginAccessControlRequest
 * class' copy constructor.
 */
CreateOriginAccessControlRequestPrivate::CreateOriginAccessControlRequestPrivate(
    const CreateOriginAccessControlRequestPrivate &other, CreateOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
