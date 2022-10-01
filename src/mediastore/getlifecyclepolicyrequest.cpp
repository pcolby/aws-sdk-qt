// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyrequest_p.h"
#include "getlifecyclepolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyRequest
 * \brief The GetLifecyclePolicyRequest class provides an interface for MediaStore GetLifecyclePolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest(const GetLifecyclePolicyRequest &other)
    : MediaStoreRequest(new GetLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLifecyclePolicyRequest object.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest()
    : MediaStoreRequest(new GetLifecyclePolicyRequestPrivate(MediaStoreRequest::GetLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyRequestPrivate
 * \brief The GetLifecyclePolicyRequestPrivate class provides private implementation for GetLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetLifecyclePolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyRequest
 * class' copy constructor.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const GetLifecyclePolicyRequestPrivate &other, GetLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
