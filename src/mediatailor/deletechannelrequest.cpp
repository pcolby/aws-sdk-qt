// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelrequest.h"
#include "deletechannelrequest_p.h"
#include "deletechannelresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteChannelRequest
 * \brief The DeleteChannelRequest class provides an interface for MediaTailor DeleteChannel requests.
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
 * \sa MediaTailorClient::deleteChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelRequest::DeleteChannelRequest(const DeleteChannelRequest &other)
    : MediaTailorRequest(new DeleteChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelRequest object.
 */
DeleteChannelRequest::DeleteChannelRequest()
    : MediaTailorRequest(new DeleteChannelRequestPrivate(MediaTailorRequest::DeleteChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteChannelRequestPrivate
 * \brief The DeleteChannelRequestPrivate class provides private implementation for DeleteChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteChannelRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const MediaTailorRequest::Action action, DeleteChannelRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelRequest
 * class' copy constructor.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const DeleteChannelRequestPrivate &other, DeleteChannelRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
