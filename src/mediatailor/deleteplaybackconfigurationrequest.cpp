// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
