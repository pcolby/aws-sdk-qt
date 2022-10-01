// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcorspolicyrequest.h"
#include "putcorspolicyrequest_p.h"
#include "putcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutCorsPolicyRequest
 * \brief The PutCorsPolicyRequest class provides an interface for MediaStore PutCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest(const PutCorsPolicyRequest &other)
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutCorsPolicyRequest object.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest()
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(MediaStoreRequest::PutCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutCorsPolicyRequestPrivate
 * \brief The PutCorsPolicyRequestPrivate class provides private implementation for PutCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutCorsPolicyRequest
 * class' copy constructor.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const PutCorsPolicyRequestPrivate &other, PutCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
