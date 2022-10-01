// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorspolicyrequest.h"
#include "getcorspolicyrequest_p.h"
#include "getcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetCorsPolicyRequest
 * \brief The GetCorsPolicyRequest class provides an interface for MediaStore GetCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest(const GetCorsPolicyRequest &other)
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCorsPolicyRequest object.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest()
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(MediaStoreRequest::GetCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetCorsPolicyRequestPrivate
 * \brief The GetCorsPolicyRequestPrivate class provides private implementation for GetCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCorsPolicyRequest
 * class' copy constructor.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const GetCorsPolicyRequestPrivate &other, GetCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
