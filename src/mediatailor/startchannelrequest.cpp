// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startchannelrequest.h"
#include "startchannelrequest_p.h"
#include "startchannelresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::StartChannelRequest
 * \brief The StartChannelRequest class provides an interface for MediaTailor StartChannel requests.
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
 * \sa MediaTailorClient::startChannel
 */

/*!
 * Constructs a copy of \a other.
 */
StartChannelRequest::StartChannelRequest(const StartChannelRequest &other)
    : MediaTailorRequest(new StartChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartChannelRequest object.
 */
StartChannelRequest::StartChannelRequest()
    : MediaTailorRequest(new StartChannelRequestPrivate(MediaTailorRequest::StartChannelAction, this))
{

}

/*!
 * \reimp
 */
bool StartChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartChannelRequest::response(QNetworkReply * const reply) const
{
    return new StartChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::StartChannelRequestPrivate
 * \brief The StartChannelRequestPrivate class provides private implementation for StartChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a StartChannelRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const MediaTailorRequest::Action action, StartChannelRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartChannelRequest
 * class' copy constructor.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const StartChannelRequestPrivate &other, StartChannelRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
