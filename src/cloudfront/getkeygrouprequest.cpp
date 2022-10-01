// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getkeygrouprequest.h"
#include "getkeygrouprequest_p.h"
#include "getkeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupRequest
 * \brief The GetKeyGroupRequest class provides an interface for CloudFront GetKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetKeyGroupRequest::GetKeyGroupRequest(const GetKeyGroupRequest &other)
    : CloudFrontRequest(new GetKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetKeyGroupRequest object.
 */
GetKeyGroupRequest::GetKeyGroupRequest()
    : CloudFrontRequest(new GetKeyGroupRequestPrivate(CloudFrontRequest::GetKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupRequestPrivate
 * \brief The GetKeyGroupRequestPrivate class provides private implementation for GetKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetKeyGroupRequestPrivate::GetKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, GetKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetKeyGroupRequest
 * class' copy constructor.
 */
GetKeyGroupRequestPrivate::GetKeyGroupRequestPrivate(
    const GetKeyGroupRequestPrivate &other, GetKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
