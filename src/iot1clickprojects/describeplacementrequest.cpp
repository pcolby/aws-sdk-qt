// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The AWS IoT 1-Click Projects API
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
