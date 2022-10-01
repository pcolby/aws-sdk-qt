// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmetricpolicyrequest.h"
#include "putmetricpolicyrequest_p.h"
#include "putmetricpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutMetricPolicyRequest
 * \brief The PutMetricPolicyRequest class provides an interface for MediaStore PutMetricPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putMetricPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutMetricPolicyRequest::PutMetricPolicyRequest(const PutMetricPolicyRequest &other)
    : MediaStoreRequest(new PutMetricPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMetricPolicyRequest object.
 */
PutMetricPolicyRequest::PutMetricPolicyRequest()
    : MediaStoreRequest(new PutMetricPolicyRequestPrivate(MediaStoreRequest::PutMetricPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutMetricPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMetricPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMetricPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutMetricPolicyRequestPrivate
 * \brief The PutMetricPolicyRequestPrivate class provides private implementation for PutMetricPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutMetricPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutMetricPolicyRequestPrivate::PutMetricPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMetricPolicyRequest
 * class' copy constructor.
 */
PutMetricPolicyRequestPrivate::PutMetricPolicyRequestPrivate(
    const PutMetricPolicyRequestPrivate &other, PutMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
