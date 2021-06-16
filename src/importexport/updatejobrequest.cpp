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

#include "updatejobrequest.h"
#include "updatejobrequest_p.h"
#include "updatejobresponse.h"
#include "importexportrequest_p.h"

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::UpdateJobRequest
 * \brief The UpdateJobRequest class provides an interface for ImportExport UpdateJob requests.
 *
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::updateJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobRequest::UpdateJobRequest(const UpdateJobRequest &other)
    : ImportExportRequest(new UpdateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobRequest object.
 */
UpdateJobRequest::UpdateJobRequest()
    : ImportExportRequest(new UpdateJobRequestPrivate(ImportExportRequest::UpdateJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobResponse(*this, reply);
}

/*!
 * \class QtAws::ImportExport::UpdateJobRequestPrivate
 * \brief The UpdateJobRequestPrivate class provides private implementation for UpdateJobRequest.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 * Constructs a UpdateJobRequestPrivate object for ImportExport \a action,
 * with public implementation \a q.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const ImportExportRequest::Action action, UpdateJobRequest * const q)
    : ImportExportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobRequest
 * class' copy constructor.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const UpdateJobRequestPrivate &other, UpdateJobRequest * const q)
    : ImportExportRequestPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace QtAws
