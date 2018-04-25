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

#include "getstatusrequest.h"
#include "getstatusrequest_p.h"
#include "getstatusresponse.h"
#include "importexportrequest_p.h"

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::GetStatusRequest
 * \brief The GetStatusRequest class provides an interface for ImportExport GetStatus requests.
 *
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::getStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetStatusRequest::GetStatusRequest(const GetStatusRequest &other)
    : ImportExportRequest(new GetStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStatusRequest object.
 */
GetStatusRequest::GetStatusRequest()
    : ImportExportRequest(new GetStatusRequestPrivate(ImportExportRequest::GetStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ImportExport::GetStatusRequestPrivate
 * \brief The GetStatusRequestPrivate class provides private implementation for GetStatusRequest.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a GetStatusRequestPrivate object for ImportExport \a action,
 * with public implementation \a q.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const ImportExportRequest::Action action, GetStatusRequest * const q)
    : ImportExportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStatusRequest
 * class' copy constructor.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const GetStatusRequestPrivate &other, GetStatusRequest * const q)
    : ImportExportRequestPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace QtAws
