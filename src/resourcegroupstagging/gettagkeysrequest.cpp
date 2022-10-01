// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagkeysrequest.h"
#include "gettagkeysrequest_p.h"
#include "gettagkeysresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysRequest
 * \brief The GetTagKeysRequest class provides an interface for ResourceGroupsTagging GetTagKeys requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getTagKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagKeysRequest::GetTagKeysRequest(const GetTagKeysRequest &other)
    : ResourceGroupsTaggingRequest(new GetTagKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagKeysRequest object.
 */
GetTagKeysRequest::GetTagKeysRequest()
    : ResourceGroupsTaggingRequest(new GetTagKeysRequestPrivate(ResourceGroupsTaggingRequest::GetTagKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetTagKeysResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysRequestPrivate
 * \brief The GetTagKeysRequestPrivate class provides private implementation for GetTagKeysRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetTagKeysRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagKeysRequest
 * class' copy constructor.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const GetTagKeysRequestPrivate &other, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
