// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchsystemtemplatesrequest.h"
#include "searchsystemtemplatesrequest_p.h"
#include "searchsystemtemplatesresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchSystemTemplatesRequest
 * \brief The SearchSystemTemplatesRequest class provides an interface for IoTThingsGraph SearchSystemTemplates requests.
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
 * \sa IoTThingsGraphClient::searchSystemTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
SearchSystemTemplatesRequest::SearchSystemTemplatesRequest(const SearchSystemTemplatesRequest &other)
    : IoTThingsGraphRequest(new SearchSystemTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchSystemTemplatesRequest object.
 */
SearchSystemTemplatesRequest::SearchSystemTemplatesRequest()
    : IoTThingsGraphRequest(new SearchSystemTemplatesRequestPrivate(IoTThingsGraphRequest::SearchSystemTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchSystemTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchSystemTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchSystemTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new SearchSystemTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::SearchSystemTemplatesRequestPrivate
 * \brief The SearchSystemTemplatesRequestPrivate class provides private implementation for SearchSystemTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchSystemTemplatesRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
SearchSystemTemplatesRequestPrivate::SearchSystemTemplatesRequestPrivate(
    const IoTThingsGraphRequest::Action action, SearchSystemTemplatesRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchSystemTemplatesRequest
 * class' copy constructor.
 */
SearchSystemTemplatesRequestPrivate::SearchSystemTemplatesRequestPrivate(
    const SearchSystemTemplatesRequestPrivate &other, SearchSystemTemplatesRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
