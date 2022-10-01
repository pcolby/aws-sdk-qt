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

#include "startreportjobrequest.h"
#include "startreportjobrequest_p.h"
#include "startreportjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartReportJobRequest
 * \brief The StartReportJobRequest class provides an interface for Backup StartReportJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startReportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartReportJobRequest::StartReportJobRequest(const StartReportJobRequest &other)
    : BackupRequest(new StartReportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReportJobRequest object.
 */
StartReportJobRequest::StartReportJobRequest()
    : BackupRequest(new StartReportJobRequestPrivate(BackupRequest::StartReportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartReportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartReportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StartReportJobRequestPrivate
 * \brief The StartReportJobRequestPrivate class provides private implementation for StartReportJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartReportJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StartReportJobRequestPrivate::StartReportJobRequestPrivate(
    const BackupRequest::Action action, StartReportJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReportJobRequest
 * class' copy constructor.
 */
StartReportJobRequestPrivate::StartReportJobRequestPrivate(
    const StartReportJobRequestPrivate &other, StartReportJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
