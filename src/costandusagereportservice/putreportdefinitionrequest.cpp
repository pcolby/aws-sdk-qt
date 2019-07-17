/*
    Copyright 2013-2019 Paul Colby

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

#include "putreportdefinitionrequest.h"
#include "putreportdefinitionrequest_p.h"
#include "putreportdefinitionresponse.h"
#include "costandusagereportservicerequest_p.h"

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::PutReportDefinitionRequest
 * \brief The PutReportDefinitionRequest class provides an interface for CostandUsageReportService PutReportDefinition requests.
 *
 * \inmodule QtAwsCostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::putReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest(const PutReportDefinitionRequest &other)
    : CostandUsageReportServiceRequest(new PutReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutReportDefinitionRequest object.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest()
    : CostandUsageReportServiceRequest(new PutReportDefinitionRequestPrivate(CostandUsageReportServiceRequest::PutReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool PutReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new PutReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostandUsageReportService::PutReportDefinitionRequestPrivate
 * \brief The PutReportDefinitionRequestPrivate class provides private implementation for PutReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a PutReportDefinitionRequestPrivate object for CostandUsageReportService \a action,
 * with public implementation \a q.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const CostandUsageReportServiceRequest::Action action, PutReportDefinitionRequest * const q)
    : CostandUsageReportServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutReportDefinitionRequest
 * class' copy constructor.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const PutReportDefinitionRequestPrivate &other, PutReportDefinitionRequest * const q)
    : CostandUsageReportServiceRequestPrivate(other, q)
{

}

} // namespace CostandUsageReportService
} // namespace QtAws
