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

#include "deletesourcelocationrequest.h"
#include "deletesourcelocationrequest_p.h"
#include "deletesourcelocationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteSourceLocationRequest
 * \brief The DeleteSourceLocationRequest class provides an interface for MediaTailor DeleteSourceLocation requests.
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
 * \sa MediaTailorClient::deleteSourceLocation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSourceLocationRequest::DeleteSourceLocationRequest(const DeleteSourceLocationRequest &other)
    : MediaTailorRequest(new DeleteSourceLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSourceLocationRequest object.
 */
DeleteSourceLocationRequest::DeleteSourceLocationRequest()
    : MediaTailorRequest(new DeleteSourceLocationRequestPrivate(MediaTailorRequest::DeleteSourceLocationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSourceLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSourceLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSourceLocationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSourceLocationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteSourceLocationRequestPrivate
 * \brief The DeleteSourceLocationRequestPrivate class provides private implementation for DeleteSourceLocationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteSourceLocationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteSourceLocationRequestPrivate::DeleteSourceLocationRequestPrivate(
    const MediaTailorRequest::Action action, DeleteSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSourceLocationRequest
 * class' copy constructor.
 */
DeleteSourceLocationRequestPrivate::DeleteSourceLocationRequestPrivate(
    const DeleteSourceLocationRequestPrivate &other, DeleteSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
