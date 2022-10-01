// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createplacementrequest.h"
#include "createplacementrequest_p.h"
#include "createplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementRequest
 * \brief The CreatePlacementRequest class provides an interface for IoT1ClickProjects CreatePlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::createPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePlacementRequest::CreatePlacementRequest(const CreatePlacementRequest &other)
    : IoT1ClickProjectsRequest(new CreatePlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePlacementRequest object.
 */
CreatePlacementRequest::CreatePlacementRequest()
    : IoT1ClickProjectsRequest(new CreatePlacementRequestPrivate(IoT1ClickProjectsRequest::CreatePlacementAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePlacementRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementRequestPrivate
 * \brief The CreatePlacementRequestPrivate class provides private implementation for CreatePlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a CreatePlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
CreatePlacementRequestPrivate::CreatePlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, CreatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePlacementRequest
 * class' copy constructor.
 */
CreatePlacementRequestPrivate::CreatePlacementRequestPrivate(
    const CreatePlacementRequestPrivate &other, CreatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
