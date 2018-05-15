/*
    Copyright 2013-2018 Paul Colby

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

#include "describeplacementrequest.h"
#include "describeplacementrequest_p.h"
#include "describeplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementRequest
 * \brief The DescribePlacementRequest class provides an interface for IoT1ClickProjects DescribePlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::describePlacement
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePlacementRequest::DescribePlacementRequest(const DescribePlacementRequest &other)
    : IoT1ClickProjectsRequest(new DescribePlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePlacementRequest object.
 */
DescribePlacementRequest::DescribePlacementRequest()
    : IoT1ClickProjectsRequest(new DescribePlacementRequestPrivate(IoT1ClickProjectsRequest::DescribePlacementAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePlacementRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementRequestPrivate
 * \brief The DescribePlacementRequestPrivate class provides private implementation for DescribePlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DescribePlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
DescribePlacementRequestPrivate::DescribePlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, DescribePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePlacementRequest
 * class' copy constructor.
 */
DescribePlacementRequestPrivate::DescribePlacementRequestPrivate(
    const DescribePlacementRequestPrivate &other, DescribePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
