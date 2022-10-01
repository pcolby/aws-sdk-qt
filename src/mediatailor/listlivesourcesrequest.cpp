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

#include "listlivesourcesrequest.h"
#include "listlivesourcesrequest_p.h"
#include "listlivesourcesresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListLiveSourcesRequest
 * \brief The ListLiveSourcesRequest class provides an interface for MediaTailor ListLiveSources requests.
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
 * \sa MediaTailorClient::listLiveSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListLiveSourcesRequest::ListLiveSourcesRequest(const ListLiveSourcesRequest &other)
    : MediaTailorRequest(new ListLiveSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLiveSourcesRequest object.
 */
ListLiveSourcesRequest::ListLiveSourcesRequest()
    : MediaTailorRequest(new ListLiveSourcesRequestPrivate(MediaTailorRequest::ListLiveSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLiveSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLiveSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLiveSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListLiveSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListLiveSourcesRequestPrivate
 * \brief The ListLiveSourcesRequestPrivate class provides private implementation for ListLiveSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListLiveSourcesRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListLiveSourcesRequestPrivate::ListLiveSourcesRequestPrivate(
    const MediaTailorRequest::Action action, ListLiveSourcesRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLiveSourcesRequest
 * class' copy constructor.
 */
ListLiveSourcesRequestPrivate::ListLiveSourcesRequestPrivate(
    const ListLiveSourcesRequestPrivate &other, ListLiveSourcesRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
