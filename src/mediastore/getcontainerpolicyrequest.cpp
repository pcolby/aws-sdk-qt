// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontainerpolicyrequest.h"
#include "getcontainerpolicyrequest_p.h"
#include "getcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetContainerPolicyRequest
 * \brief The GetContainerPolicyRequest class provides an interface for MediaStore GetContainerPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getContainerPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest(const GetContainerPolicyRequest &other)
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContainerPolicyRequest object.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest()
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(MediaStoreRequest::GetContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContainerPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetContainerPolicyRequestPrivate
 * \brief The GetContainerPolicyRequestPrivate class provides private implementation for GetContainerPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetContainerPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContainerPolicyRequest
 * class' copy constructor.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const GetContainerPolicyRequestPrivate &other, GetContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
