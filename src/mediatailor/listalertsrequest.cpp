// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalertsrequest.h"
#include "listalertsrequest_p.h"
#include "listalertsresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListAlertsRequest
 * \brief The ListAlertsRequest class provides an interface for MediaTailor ListAlerts requests.
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
 * \sa MediaTailorClient::listAlerts
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlertsRequest::ListAlertsRequest(const ListAlertsRequest &other)
    : MediaTailorRequest(new ListAlertsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlertsRequest object.
 */
ListAlertsRequest::ListAlertsRequest()
    : MediaTailorRequest(new ListAlertsRequestPrivate(MediaTailorRequest::ListAlertsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlertsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlertsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlertsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlertsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListAlertsRequestPrivate
 * \brief The ListAlertsRequestPrivate class provides private implementation for ListAlertsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListAlertsRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListAlertsRequestPrivate::ListAlertsRequestPrivate(
    const MediaTailorRequest::Action action, ListAlertsRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlertsRequest
 * class' copy constructor.
 */
ListAlertsRequestPrivate::ListAlertsRequestPrivate(
    const ListAlertsRequestPrivate &other, ListAlertsRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
