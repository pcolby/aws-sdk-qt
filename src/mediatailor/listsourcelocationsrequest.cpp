// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsourcelocationsrequest.h"
#include "listsourcelocationsrequest_p.h"
#include "listsourcelocationsresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListSourceLocationsRequest
 * \brief The ListSourceLocationsRequest class provides an interface for MediaTailor ListSourceLocations requests.
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
 * \sa MediaTailorClient::listSourceLocations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSourceLocationsRequest::ListSourceLocationsRequest(const ListSourceLocationsRequest &other)
    : MediaTailorRequest(new ListSourceLocationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSourceLocationsRequest object.
 */
ListSourceLocationsRequest::ListSourceLocationsRequest()
    : MediaTailorRequest(new ListSourceLocationsRequestPrivate(MediaTailorRequest::ListSourceLocationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSourceLocationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSourceLocationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSourceLocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSourceLocationsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::ListSourceLocationsRequestPrivate
 * \brief The ListSourceLocationsRequestPrivate class provides private implementation for ListSourceLocationsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListSourceLocationsRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
ListSourceLocationsRequestPrivate::ListSourceLocationsRequestPrivate(
    const MediaTailorRequest::Action action, ListSourceLocationsRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSourceLocationsRequest
 * class' copy constructor.
 */
ListSourceLocationsRequestPrivate::ListSourceLocationsRequestPrivate(
    const ListSourceLocationsRequestPrivate &other, ListSourceLocationsRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
