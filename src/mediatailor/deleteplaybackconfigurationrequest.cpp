/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteplaybackconfigurationrequest.h"
#include "deleteplaybackconfigurationrequest_p.h"
#include "deleteplaybackconfigurationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeletePlaybackConfigurationRequest
 * \brief The DeletePlaybackConfigurationRequest class provides an interface for MediaTailor DeletePlaybackConfiguration requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDK to configure scalable ad insertion for your live and VOD content. With AWS
 *  Elemental MediaTailor, you can serve targeted ads to viewers while maintaining broadcast quality in over-the-top (OTT)
 *  video applications. For information about using the service, including detailed information about the settings covered
 *  in this guide, see the AWS Elemental MediaTailor User Guide.<p>Through the SDK, you manage AWS Elemental MediaTailor
 *  configurations the same as you do through the console. For example, you specify ad insertion behavior and mapping
 *  information for the origin server and the ad decision server
 *
 * \sa MediaTailorClient::deletePlaybackConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlaybackConfigurationRequest::DeletePlaybackConfigurationRequest(const DeletePlaybackConfigurationRequest &other)
    : MediaTailorRequest(new DeletePlaybackConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlaybackConfigurationRequest object.
 */
DeletePlaybackConfigurationRequest::DeletePlaybackConfigurationRequest()
    : MediaTailorRequest(new DeletePlaybackConfigurationRequestPrivate(MediaTailorRequest::DeletePlaybackConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlaybackConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlaybackConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlaybackConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlaybackConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeletePlaybackConfigurationRequestPrivate
 * \brief The DeletePlaybackConfigurationRequestPrivate class provides private implementation for DeletePlaybackConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeletePlaybackConfigurationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeletePlaybackConfigurationRequestPrivate::DeletePlaybackConfigurationRequestPrivate(
    const MediaTailorRequest::Action action, DeletePlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlaybackConfigurationRequest
 * class' copy constructor.
 */
DeletePlaybackConfigurationRequestPrivate::DeletePlaybackConfigurationRequestPrivate(
    const DeletePlaybackConfigurationRequestPrivate &other, DeletePlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
