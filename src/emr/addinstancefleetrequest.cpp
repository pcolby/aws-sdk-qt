// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addinstancefleetrequest.h"
#include "addinstancefleetrequest_p.h"
#include "addinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddInstanceFleetRequest
 * \brief The AddInstanceFleetRequest class provides an interface for Emr AddInstanceFleet requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addInstanceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest(const AddInstanceFleetRequest &other)
    : EmrRequest(new AddInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddInstanceFleetRequest object.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest()
    : EmrRequest(new AddInstanceFleetRequestPrivate(EmrRequest::AddInstanceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool AddInstanceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddInstanceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new AddInstanceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::AddInstanceFleetRequestPrivate
 * \brief The AddInstanceFleetRequestPrivate class provides private implementation for AddInstanceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a AddInstanceFleetRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const EmrRequest::Action action, AddInstanceFleetRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddInstanceFleetRequest
 * class' copy constructor.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const AddInstanceFleetRequestPrivate &other, AddInstanceFleetRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
