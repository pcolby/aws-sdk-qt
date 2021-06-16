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

#include "createvodsourcerequest.h"
#include "createvodsourcerequest_p.h"
#include "createvodsourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateVodSourceRequest
 * \brief The CreateVodSourceRequest class provides an interface for MediaTailor CreateVodSource requests.
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
 * \sa MediaTailorClient::createVodSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVodSourceRequest::CreateVodSourceRequest(const CreateVodSourceRequest &other)
    : MediaTailorRequest(new CreateVodSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVodSourceRequest object.
 */
CreateVodSourceRequest::CreateVodSourceRequest()
    : MediaTailorRequest(new CreateVodSourceRequestPrivate(MediaTailorRequest::CreateVodSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVodSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVodSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVodSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateVodSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::CreateVodSourceRequestPrivate
 * \brief The CreateVodSourceRequestPrivate class provides private implementation for CreateVodSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateVodSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
CreateVodSourceRequestPrivate::CreateVodSourceRequestPrivate(
    const MediaTailorRequest::Action action, CreateVodSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVodSourceRequest
 * class' copy constructor.
 */
CreateVodSourceRequestPrivate::CreateVodSourceRequestPrivate(
    const CreateVodSourceRequestPrivate &other, CreateVodSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
