// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
