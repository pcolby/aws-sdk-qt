// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorspolicyrequest.h"
#include "deletecorspolicyrequest_p.h"
#include "deletecorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyRequest
 * \brief The DeleteCorsPolicyRequest class provides an interface for MediaStore DeleteCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest(const DeleteCorsPolicyRequest &other)
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCorsPolicyRequest object.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest()
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(MediaStoreRequest::DeleteCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyRequestPrivate
 * \brief The DeleteCorsPolicyRequestPrivate class provides private implementation for DeleteCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCorsPolicyRequest
 * class' copy constructor.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const DeleteCorsPolicyRequestPrivate &other, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
