// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprefetchschedulesrequest.h"
#include "listprefetchschedulesrequest_p.h"
#include "listprefetchschedulesresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListPrefetchSchedulesRequest
 * \brief The ListPrefetchSchedulesRequest class provides an interface for MediaTailor ListPrefetchSchedules requests.
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
 * \sa MediaTailorClient::listPrefetchSchedules
 */

/*!
 * Constructs a copy of \a other.
 */
ListPrefetchSchedulesRequest::ListPrefetchSchedulesRequest(const ListPrefetchSchedulesRequest &other)
    : MediaTailorRequest(new ListPrefetchSchedulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPrefetchSchedulesRequest object.
 */
ListPrefetchSchedulesRequest::ListPrefetchSchedulesRequest()
    : MediaTailorRequest(new ListPrefetchSchedulesRequestPrivate(MediaTailorRequest::ListPrefetchSchedulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrefetchSchedulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPrefetchSchedulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrefetchSchedulesRequest::response(QNetworkReply * const reply) const
{
    return new ListPrefetchSchedulesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListPrefetchSchedulesRequestPrivate
 * \brief The ListPrefetchSchedulesRequestPrivate class provides private implementation for ListPrefetchSchedulesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListPrefetchSchedulesRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListPrefetchSchedulesRequestPrivate::ListPrefetchSchedulesRequestPrivate(
    const MediaTailorRequest::Action action, ListPrefetchSchedulesRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPrefetchSchedulesRequest
 * class' copy constructor.
 */
ListPrefetchSchedulesRequestPrivate::ListPrefetchSchedulesRequestPrivate(
    const ListPrefetchSchedulesRequestPrivate &other, ListPrefetchSchedulesRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
