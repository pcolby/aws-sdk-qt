// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelpolicyrequest.h"
#include "getchannelpolicyrequest_p.h"
#include "getchannelpolicyresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetChannelPolicyRequest
 * \brief The GetChannelPolicyRequest class provides an interface for MediaTailor GetChannelPolicy requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::getChannelPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelPolicyRequest::GetChannelPolicyRequest(const GetChannelPolicyRequest &other)
    : MediaTailorRequest(new GetChannelPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelPolicyRequest object.
 */
GetChannelPolicyRequest::GetChannelPolicyRequest()
    : MediaTailorRequest(new GetChannelPolicyRequestPrivate(MediaTailorRequest::GetChannelPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::GetChannelPolicyRequestPrivate
 * \brief The GetChannelPolicyRequestPrivate class provides private implementation for GetChannelPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetChannelPolicyRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
GetChannelPolicyRequestPrivate::GetChannelPolicyRequestPrivate(
    const MediaTailorRequest::Action action, GetChannelPolicyRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelPolicyRequest
 * class' copy constructor.
 */
GetChannelPolicyRequestPrivate::GetChannelPolicyRequestPrivate(
    const GetChannelPolicyRequestPrivate &other, GetChannelPolicyRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
