// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchflowtemplatesrequest.h"
#include "searchflowtemplatesrequest_p.h"
#include "searchflowtemplatesresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowTemplatesRequest
 * \brief The SearchFlowTemplatesRequest class provides an interface for IoTThingsGraph SearchFlowTemplates requests.
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
 * \sa IoTThingsGraphClient::searchFlowTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
SearchFlowTemplatesRequest::SearchFlowTemplatesRequest(const SearchFlowTemplatesRequest &other)
    : IoTThingsGraphRequest(new SearchFlowTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchFlowTemplatesRequest object.
 */
SearchFlowTemplatesRequest::SearchFlowTemplatesRequest()
    : IoTThingsGraphRequest(new SearchFlowTemplatesRequestPrivate(IoTThingsGraphRequest::SearchFlowTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFlowTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchFlowTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFlowTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new SearchFlowTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowTemplatesRequestPrivate
 * \brief The SearchFlowTemplatesRequestPrivate class provides private implementation for SearchFlowTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchFlowTemplatesRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
SearchFlowTemplatesRequestPrivate::SearchFlowTemplatesRequestPrivate(
    const IoTThingsGraphRequest::Action action, SearchFlowTemplatesRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchFlowTemplatesRequest
 * class' copy constructor.
 */
SearchFlowTemplatesRequestPrivate::SearchFlowTemplatesRequestPrivate(
    const SearchFlowTemplatesRequestPrivate &other, SearchFlowTemplatesRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
