// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsrequest.h"
#include "listchannelsrequest_p.h"
#include "listchannelsresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListChannelsRequest
 * \brief The ListChannelsRequest class provides an interface for MediaTailor ListChannels requests.
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
 * \sa MediaTailorClient::listChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsRequest::ListChannelsRequest(const ListChannelsRequest &other)
    : MediaTailorRequest(new ListChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsRequest object.
 */
ListChannelsRequest::ListChannelsRequest()
    : MediaTailorRequest(new ListChannelsRequestPrivate(MediaTailorRequest::ListChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListChannelsRequestPrivate
 * \brief The ListChannelsRequestPrivate class provides private implementation for ListChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListChannelsRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const MediaTailorRequest::Action action, ListChannelsRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsRequest
 * class' copy constructor.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const ListChannelsRequestPrivate &other, ListChannelsRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
