// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyrequest_p.h"
#include "deletelifecyclepolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyRequest
 * \brief The DeleteLifecyclePolicyRequest class provides an interface for MediaStore DeleteLifecyclePolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other)
    : MediaStoreRequest(new DeleteLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLifecyclePolicyRequest object.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest()
    : MediaStoreRequest(new DeleteLifecyclePolicyRequestPrivate(MediaStoreRequest::DeleteLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyRequestPrivate
 * \brief The DeleteLifecyclePolicyRequestPrivate class provides private implementation for DeleteLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteLifecyclePolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecyclePolicyRequest
 * class' copy constructor.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const DeleteLifecyclePolicyRequestPrivate &other, DeleteLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
