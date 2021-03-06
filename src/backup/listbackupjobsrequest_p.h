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

#ifndef QTAWS_LISTBACKUPJOBSREQUEST_P_H
#define QTAWS_LISTBACKUPJOBSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupJobsRequest;

class ListBackupJobsRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupJobsRequestPrivate(const BackupRequest::Action action,
                                   ListBackupJobsRequest * const q);
    ListBackupJobsRequestPrivate(const ListBackupJobsRequestPrivate &other,
                                   ListBackupJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
