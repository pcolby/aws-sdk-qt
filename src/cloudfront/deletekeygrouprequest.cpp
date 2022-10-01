// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletekeygrouprequest.h"
#include "deletekeygrouprequest_p.h"
#include "deletekeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupRequest
 * \brief The DeleteKeyGroupRequest class provides an interface for CloudFront DeleteKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKeyGroupRequest::DeleteKeyGroupRequest(const DeleteKeyGroupRequest &other)
    : CloudFrontRequest(new DeleteKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKeyGroupRequest object.
 */
DeleteKeyGroupRequest::DeleteKeyGroupRequest()
    : CloudFrontRequest(new DeleteKeyGroupRequestPrivate(CloudFrontRequest::DeleteKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupRequestPrivate
 * \brief The DeleteKeyGroupRequestPrivate class provides private implementation for DeleteKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteKeyGroupRequestPrivate::DeleteKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, DeleteKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKeyGroupRequest
 * class' copy constructor.
 */
DeleteKeyGroupRequestPrivate::DeleteKeyGroupRequestPrivate(
    const DeleteKeyGroupRequestPrivate &other, DeleteKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
