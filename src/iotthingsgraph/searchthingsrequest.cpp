// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchthingsrequest.h"
#include "searchthingsrequest_p.h"
#include "searchthingsresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchThingsRequest
 * \brief The SearchThingsRequest class provides an interface for IoTThingsGraph SearchThings requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::searchThings
 */

/*!
 * Constructs a copy of \a other.
 */
SearchThingsRequest::SearchThingsRequest(const SearchThingsRequest &other)
    : IoTThingsGraphRequest(new SearchThingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchThingsRequest object.
 */
SearchThingsRequest::SearchThingsRequest()
    : IoTThingsGraphRequest(new SearchThingsRequestPrivate(IoTThingsGraphRequest::SearchThingsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchThingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchThingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchThingsRequest::response(QNetworkReply * const reply) const
{
    return new SearchThingsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::SearchThingsRequestPrivate
 * \brief The SearchThingsRequestPrivate class provides private implementation for SearchThingsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchThingsRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
SearchThingsRequestPrivate::SearchThingsRequestPrivate(
    const IoTThingsGraphRequest::Action action, SearchThingsRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchThingsRequest
 * class' copy constructor.
 */
SearchThingsRequestPrivate::SearchThingsRequestPrivate(
    const SearchThingsRequestPrivate &other, SearchThingsRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
