// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelivesourcerequest.h"
#include "deletelivesourcerequest_p.h"
#include "deletelivesourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteLiveSourceRequest
 * \brief The DeleteLiveSourceRequest class provides an interface for MediaTailor DeleteLiveSource requests.
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
 * \sa MediaTailorClient::deleteLiveSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLiveSourceRequest::DeleteLiveSourceRequest(const DeleteLiveSourceRequest &other)
    : MediaTailorRequest(new DeleteLiveSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLiveSourceRequest object.
 */
DeleteLiveSourceRequest::DeleteLiveSourceRequest()
    : MediaTailorRequest(new DeleteLiveSourceRequestPrivate(MediaTailorRequest::DeleteLiveSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLiveSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLiveSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLiveSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLiveSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteLiveSourceRequestPrivate
 * \brief The DeleteLiveSourceRequestPrivate class provides private implementation for DeleteLiveSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteLiveSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteLiveSourceRequestPrivate::DeleteLiveSourceRequestPrivate(
    const MediaTailorRequest::Action action, DeleteLiveSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLiveSourceRequest
 * class' copy constructor.
 */
DeleteLiveSourceRequestPrivate::DeleteLiveSourceRequestPrivate(
    const DeleteLiveSourceRequestPrivate &other, DeleteLiveSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
