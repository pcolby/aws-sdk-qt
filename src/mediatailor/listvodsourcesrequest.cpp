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

#include "listvodsourcesrequest.h"
#include "listvodsourcesrequest_p.h"
#include "listvodsourcesresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListVodSourcesRequest
 * \brief The ListVodSourcesRequest class provides an interface for MediaTailor ListVodSources requests.
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
 * \sa MediaTailorClient::listVodSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListVodSourcesRequest::ListVodSourcesRequest(const ListVodSourcesRequest &other)
    : MediaTailorRequest(new ListVodSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVodSourcesRequest object.
 */
ListVodSourcesRequest::ListVodSourcesRequest()
    : MediaTailorRequest(new ListVodSourcesRequestPrivate(MediaTailorRequest::ListVodSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVodSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVodSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVodSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListVodSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListVodSourcesRequestPrivate
 * \brief The ListVodSourcesRequestPrivate class provides private implementation for ListVodSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListVodSourcesRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListVodSourcesRequestPrivate::ListVodSourcesRequestPrivate(
    const MediaTailorRequest::Action action, ListVodSourcesRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVodSourcesRequest
 * class' copy constructor.
 */
ListVodSourcesRequestPrivate::ListVodSourcesRequestPrivate(
    const ListVodSourcesRequestPrivate &other, ListVodSourcesRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
