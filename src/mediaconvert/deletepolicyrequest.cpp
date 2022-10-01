// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeletePolicyRequest
 * \brief The DeletePolicyRequest class provides an interface for MediaConvert DeletePolicy requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deletePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : MediaConvertRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : MediaConvertRequest(new DeletePolicyRequestPrivate(MediaConvertRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DeletePolicyRequestPrivate
 * \brief The DeletePolicyRequestPrivate class provides private implementation for DeletePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeletePolicyRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const MediaConvertRequest::Action action, DeletePolicyRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
