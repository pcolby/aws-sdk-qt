// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplaybackconfigurationsrequest.h"
#include "listplaybackconfigurationsrequest_p.h"
#include "listplaybackconfigurationsresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListPlaybackConfigurationsRequest
 * \brief The ListPlaybackConfigurationsRequest class provides an interface for MediaTailor ListPlaybackConfigurations requests.
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
 * \sa MediaTailorClient::listPlaybackConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlaybackConfigurationsRequest::ListPlaybackConfigurationsRequest(const ListPlaybackConfigurationsRequest &other)
    : MediaTailorRequest(new ListPlaybackConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlaybackConfigurationsRequest object.
 */
ListPlaybackConfigurationsRequest::ListPlaybackConfigurationsRequest()
    : MediaTailorRequest(new ListPlaybackConfigurationsRequestPrivate(MediaTailorRequest::ListPlaybackConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPlaybackConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPlaybackConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPlaybackConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListPlaybackConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListPlaybackConfigurationsRequestPrivate
 * \brief The ListPlaybackConfigurationsRequestPrivate class provides private implementation for ListPlaybackConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListPlaybackConfigurationsRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListPlaybackConfigurationsRequestPrivate::ListPlaybackConfigurationsRequestPrivate(
    const MediaTailorRequest::Action action, ListPlaybackConfigurationsRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPlaybackConfigurationsRequest
 * class' copy constructor.
 */
ListPlaybackConfigurationsRequestPrivate::ListPlaybackConfigurationsRequestPrivate(
    const ListPlaybackConfigurationsRequestPrivate &other, ListPlaybackConfigurationsRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
