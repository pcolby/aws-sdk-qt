/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunrequest_p.h"
#include "startondemandreplicationrunresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::StartOnDemandReplicationRunRequest
 * \brief The StartOnDemandReplicationRunRequest class provides an interface for SMS StartOnDemandReplicationRun requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::startOnDemandReplicationRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest(const StartOnDemandReplicationRunRequest &other)
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartOnDemandReplicationRunRequest object.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest()
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(SMSRequest::StartOnDemandReplicationRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartOnDemandReplicationRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartOnDemandReplicationRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOnDemandReplicationRunRequest::response(QNetworkReply * const reply) const
{
    return new StartOnDemandReplicationRunResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::StartOnDemandReplicationRunRequestPrivate
 * \brief The StartOnDemandReplicationRunRequestPrivate class provides private implementation for StartOnDemandReplicationRunRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a StartOnDemandReplicationRunRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const SMSRequest::Action action, StartOnDemandReplicationRunRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartOnDemandReplicationRunRequest
 * class' copy constructor.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const StartOnDemandReplicationRunRequestPrivate &other, StartOnDemandReplicationRunRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
