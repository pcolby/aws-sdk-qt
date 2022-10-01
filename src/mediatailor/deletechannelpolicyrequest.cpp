// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelpolicyrequest.h"
#include "deletechannelpolicyrequest_p.h"
#include "deletechannelpolicyresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteChannelPolicyRequest
 * \brief The DeleteChannelPolicyRequest class provides an interface for MediaTailor DeleteChannelPolicy requests.
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
 * \sa MediaTailorClient::deleteChannelPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelPolicyRequest::DeleteChannelPolicyRequest(const DeleteChannelPolicyRequest &other)
    : MediaTailorRequest(new DeleteChannelPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelPolicyRequest object.
 */
DeleteChannelPolicyRequest::DeleteChannelPolicyRequest()
    : MediaTailorRequest(new DeleteChannelPolicyRequestPrivate(MediaTailorRequest::DeleteChannelPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteChannelPolicyRequestPrivate
 * \brief The DeleteChannelPolicyRequestPrivate class provides private implementation for DeleteChannelPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteChannelPolicyRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteChannelPolicyRequestPrivate::DeleteChannelPolicyRequestPrivate(
    const MediaTailorRequest::Action action, DeleteChannelPolicyRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelPolicyRequest
 * class' copy constructor.
 */
DeleteChannelPolicyRequestPrivate::DeleteChannelPolicyRequestPrivate(
    const DeleteChannelPolicyRequestPrivate &other, DeleteChannelPolicyRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
