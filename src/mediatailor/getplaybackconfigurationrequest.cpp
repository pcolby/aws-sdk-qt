// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplaybackconfigurationrequest.h"
#include "getplaybackconfigurationrequest_p.h"
#include "getplaybackconfigurationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetPlaybackConfigurationRequest
 * \brief The GetPlaybackConfigurationRequest class provides an interface for MediaTailor GetPlaybackConfiguration requests.
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
 * \sa MediaTailorClient::getPlaybackConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetPlaybackConfigurationRequest::GetPlaybackConfigurationRequest(const GetPlaybackConfigurationRequest &other)
    : MediaTailorRequest(new GetPlaybackConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPlaybackConfigurationRequest object.
 */
GetPlaybackConfigurationRequest::GetPlaybackConfigurationRequest()
    : MediaTailorRequest(new GetPlaybackConfigurationRequestPrivate(MediaTailorRequest::GetPlaybackConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetPlaybackConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPlaybackConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPlaybackConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetPlaybackConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::GetPlaybackConfigurationRequestPrivate
 * \brief The GetPlaybackConfigurationRequestPrivate class provides private implementation for GetPlaybackConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetPlaybackConfigurationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
GetPlaybackConfigurationRequestPrivate::GetPlaybackConfigurationRequestPrivate(
    const MediaTailorRequest::Action action, GetPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPlaybackConfigurationRequest
 * class' copy constructor.
 */
GetPlaybackConfigurationRequestPrivate::GetPlaybackConfigurationRequestPrivate(
    const GetPlaybackConfigurationRequestPrivate &other, GetPlaybackConfigurationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
