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

#include "starttabledataimportjobrequest.h"
#include "starttabledataimportjobrequest_p.h"
#include "starttabledataimportjobresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobRequest
 * \brief The StartTableDataImportJobRequest class provides an interface for Honeycode StartTableDataImportJob requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::startTableDataImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTableDataImportJobRequest::StartTableDataImportJobRequest(const StartTableDataImportJobRequest &other)
    : HoneycodeRequest(new StartTableDataImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTableDataImportJobRequest object.
 */
StartTableDataImportJobRequest::StartTableDataImportJobRequest()
    : HoneycodeRequest(new StartTableDataImportJobRequestPrivate(HoneycodeRequest::StartTableDataImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTableDataImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTableDataImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTableDataImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTableDataImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobRequestPrivate
 * \brief The StartTableDataImportJobRequestPrivate class provides private implementation for StartTableDataImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a StartTableDataImportJobRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
StartTableDataImportJobRequestPrivate::StartTableDataImportJobRequestPrivate(
    const HoneycodeRequest::Action action, StartTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTableDataImportJobRequest
 * class' copy constructor.
 */
StartTableDataImportJobRequestPrivate::StartTableDataImportJobRequestPrivate(
    const StartTableDataImportJobRequestPrivate &other, StartTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
