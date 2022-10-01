// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontainerpolicyrequest.h"
#include "putcontainerpolicyrequest_p.h"
#include "putcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutContainerPolicyRequest
 * \brief The PutContainerPolicyRequest class provides an interface for MediaStore PutContainerPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putContainerPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest(const PutContainerPolicyRequest &other)
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContainerPolicyRequest object.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest()
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(MediaStoreRequest::PutContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContainerPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContainerPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutContainerPolicyRequestPrivate
 * \brief The PutContainerPolicyRequestPrivate class provides private implementation for PutContainerPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutContainerPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContainerPolicyRequest
 * class' copy constructor.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const PutContainerPolicyRequestPrivate &other, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
