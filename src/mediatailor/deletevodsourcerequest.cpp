/*
    Copyright 2013-2021 Paul Colby

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

#include "deletevodsourcerequest.h"
#include "deletevodsourcerequest_p.h"
#include "deletevodsourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteVodSourceRequest
 * \brief The DeleteVodSourceRequest class provides an interface for MediaTailor DeleteVodSource requests.
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
 * \sa MediaTailorClient::deleteVodSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVodSourceRequest::DeleteVodSourceRequest(const DeleteVodSourceRequest &other)
    : MediaTailorRequest(new DeleteVodSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVodSourceRequest object.
 */
DeleteVodSourceRequest::DeleteVodSourceRequest()
    : MediaTailorRequest(new DeleteVodSourceRequestPrivate(MediaTailorRequest::DeleteVodSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVodSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVodSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVodSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVodSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteVodSourceRequestPrivate
 * \brief The DeleteVodSourceRequestPrivate class provides private implementation for DeleteVodSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteVodSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteVodSourceRequestPrivate::DeleteVodSourceRequestPrivate(
    const MediaTailorRequest::Action action, DeleteVodSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVodSourceRequest
 * class' copy constructor.
 */
DeleteVodSourceRequestPrivate::DeleteVodSourceRequestPrivate(
    const DeleteVodSourceRequestPrivate &other, DeleteVodSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
