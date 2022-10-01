// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyinstancefleetrequest.h"
#include "modifyinstancefleetrequest_p.h"
#include "modifyinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyInstanceFleetRequest
 * \brief The ModifyInstanceFleetRequest class provides an interface for Emr ModifyInstanceFleet requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyInstanceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest(const ModifyInstanceFleetRequest &other)
    : EmrRequest(new ModifyInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyInstanceFleetRequest object.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest()
    : EmrRequest(new ModifyInstanceFleetRequestPrivate(EmrRequest::ModifyInstanceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyInstanceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ModifyInstanceFleetRequestPrivate
 * \brief The ModifyInstanceFleetRequestPrivate class provides private implementation for ModifyInstanceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyInstanceFleetRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const EmrRequest::Action action, ModifyInstanceFleetRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceFleetRequest
 * class' copy constructor.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const ModifyInstanceFleetRequestPrivate &other, ModifyInstanceFleetRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
