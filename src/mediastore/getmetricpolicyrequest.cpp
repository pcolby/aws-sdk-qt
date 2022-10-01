// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricpolicyrequest.h"
#include "getmetricpolicyrequest_p.h"
#include "getmetricpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetMetricPolicyRequest
 * \brief The GetMetricPolicyRequest class provides an interface for MediaStore GetMetricPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getMetricPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetricPolicyRequest::GetMetricPolicyRequest(const GetMetricPolicyRequest &other)
    : MediaStoreRequest(new GetMetricPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetricPolicyRequest object.
 */
GetMetricPolicyRequest::GetMetricPolicyRequest()
    : MediaStoreRequest(new GetMetricPolicyRequestPrivate(MediaStoreRequest::GetMetricPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetricPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetricPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetMetricPolicyRequestPrivate
 * \brief The GetMetricPolicyRequestPrivate class provides private implementation for GetMetricPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetMetricPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetMetricPolicyRequestPrivate::GetMetricPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetricPolicyRequest
 * class' copy constructor.
 */
GetMetricPolicyRequestPrivate::GetMetricPolicyRequestPrivate(
    const GetMetricPolicyRequestPrivate &other, GetMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
