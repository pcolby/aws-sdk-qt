/*
    Copyright 2013-2021 Paul Colby

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

#include "setterminationprotectionrequest.h"
#include "setterminationprotectionrequest_p.h"
#include "setterminationprotectionresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::SetTerminationProtectionRequest
 * \brief The SetTerminationProtectionRequest class provides an interface for EMR SetTerminationProtection requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::setTerminationProtection
 */

/*!
 * Constructs a copy of \a other.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest(const SetTerminationProtectionRequest &other)
    : EmrRequest(new SetTerminationProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetTerminationProtectionRequest object.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest()
    : EmrRequest(new SetTerminationProtectionRequestPrivate(EmrRequest::SetTerminationProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool SetTerminationProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetTerminationProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTerminationProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetTerminationProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::SetTerminationProtectionRequestPrivate
 * \brief The SetTerminationProtectionRequestPrivate class provides private implementation for SetTerminationProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a SetTerminationProtectionRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const EmrRequest::Action action, SetTerminationProtectionRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetTerminationProtectionRequest
 * class' copy constructor.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const SetTerminationProtectionRequestPrivate &other, SetTerminationProtectionRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
