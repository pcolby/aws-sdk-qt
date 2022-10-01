// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevodsourcerequest.h"
#include "updatevodsourcerequest_p.h"
#include "updatevodsourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::UpdateVodSourceRequest
 * \brief The UpdateVodSourceRequest class provides an interface for MediaTailor UpdateVodSource requests.
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
 * \sa MediaTailorClient::updateVodSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVodSourceRequest::UpdateVodSourceRequest(const UpdateVodSourceRequest &other)
    : MediaTailorRequest(new UpdateVodSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVodSourceRequest object.
 */
UpdateVodSourceRequest::UpdateVodSourceRequest()
    : MediaTailorRequest(new UpdateVodSourceRequestPrivate(MediaTailorRequest::UpdateVodSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVodSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVodSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVodSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVodSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::UpdateVodSourceRequestPrivate
 * \brief The UpdateVodSourceRequestPrivate class provides private implementation for UpdateVodSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a UpdateVodSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
UpdateVodSourceRequestPrivate::UpdateVodSourceRequestPrivate(
    const MediaTailorRequest::Action action, UpdateVodSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVodSourceRequest
 * class' copy constructor.
 */
UpdateVodSourceRequestPrivate::UpdateVodSourceRequestPrivate(
    const UpdateVodSourceRequestPrivate &other, UpdateVodSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
