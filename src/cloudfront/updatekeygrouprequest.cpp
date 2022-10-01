// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatekeygrouprequest.h"
#include "updatekeygrouprequest_p.h"
#include "updatekeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupRequest
 * \brief The UpdateKeyGroupRequest class provides an interface for CloudFront UpdateKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateKeyGroupRequest::UpdateKeyGroupRequest(const UpdateKeyGroupRequest &other)
    : CloudFrontRequest(new UpdateKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateKeyGroupRequest object.
 */
UpdateKeyGroupRequest::UpdateKeyGroupRequest()
    : CloudFrontRequest(new UpdateKeyGroupRequestPrivate(CloudFrontRequest::UpdateKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupRequestPrivate
 * \brief The UpdateKeyGroupRequestPrivate class provides private implementation for UpdateKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateKeyGroupRequestPrivate::UpdateKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, UpdateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateKeyGroupRequest
 * class' copy constructor.
 */
UpdateKeyGroupRequestPrivate::UpdateKeyGroupRequestPrivate(
    const UpdateKeyGroupRequestPrivate &other, UpdateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
