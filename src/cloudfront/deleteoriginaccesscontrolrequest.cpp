// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoriginaccesscontrolrequest.h"
#include "deleteoriginaccesscontrolrequest_p.h"
#include "deleteoriginaccesscontrolresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteOriginAccessControlRequest
 * \brief The DeleteOriginAccessControlRequest class provides an interface for CloudFront DeleteOriginAccessControl requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteOriginAccessControl
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOriginAccessControlRequest::DeleteOriginAccessControlRequest(const DeleteOriginAccessControlRequest &other)
    : CloudFrontRequest(new DeleteOriginAccessControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOriginAccessControlRequest object.
 */
DeleteOriginAccessControlRequest::DeleteOriginAccessControlRequest()
    : CloudFrontRequest(new DeleteOriginAccessControlRequestPrivate(CloudFrontRequest::DeleteOriginAccessControlAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOriginAccessControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOriginAccessControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOriginAccessControlRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOriginAccessControlResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteOriginAccessControlRequestPrivate
 * \brief The DeleteOriginAccessControlRequestPrivate class provides private implementation for DeleteOriginAccessControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteOriginAccessControlRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteOriginAccessControlRequestPrivate::DeleteOriginAccessControlRequestPrivate(
    const CloudFrontRequest::Action action, DeleteOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOriginAccessControlRequest
 * class' copy constructor.
 */
DeleteOriginAccessControlRequestPrivate::DeleteOriginAccessControlRequestPrivate(
    const DeleteOriginAccessControlRequestPrivate &other, DeleteOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
