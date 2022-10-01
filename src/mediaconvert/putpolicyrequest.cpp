/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putpolicyrequest.h"
#include "putpolicyrequest_p.h"
#include "putpolicyresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::PutPolicyRequest
 * \brief The PutPolicyRequest class provides an interface for MediaConvert PutPolicy requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::putPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutPolicyRequest::PutPolicyRequest(const PutPolicyRequest &other)
    : MediaConvertRequest(new PutPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPolicyRequest object.
 */
PutPolicyRequest::PutPolicyRequest()
    : MediaConvertRequest(new PutPolicyRequestPrivate(MediaConvertRequest::PutPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::PutPolicyRequestPrivate
 * \brief The PutPolicyRequestPrivate class provides private implementation for PutPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a PutPolicyRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const MediaConvertRequest::Action action, PutPolicyRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPolicyRequest
 * class' copy constructor.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const PutPolicyRequestPrivate &other, PutPolicyRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
