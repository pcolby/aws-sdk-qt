// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetPolicyRequest
 * \brief The GetPolicyRequest class provides an interface for MediaConvert GetPolicy requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : MediaConvertRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : MediaConvertRequest(new GetPolicyRequestPrivate(MediaConvertRequest::GetPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::GetPolicyRequestPrivate
 * \brief The GetPolicyRequestPrivate class provides private implementation for GetPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetPolicyRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const MediaConvertRequest::Action action, GetPolicyRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
