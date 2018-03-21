/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_P_H

#include "rds_p.h"
#include "restoredbinstancefromdbsnapshotrequest.h"

namespace AWS {

namespace RDS {

class RestoreDBInstanceFromDBSnapshotRequest;

class QTAWS_EXPORT RestoreDBInstanceFromDBSnapshotRequestPrivate : public RDSPrivate {

public:
    RestoreDBInstanceFromDBSnapshotRequestPrivate(const RDS::Action action,
                                   RestoreDBInstanceFromDBSnapshotRequest * const q);
    RestoreDBInstanceFromDBSnapshotRequestPrivate(const RestoreDBInstanceFromDBSnapshotRequestPrivate &other,
                                   RestoreDBInstanceFromDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromDBSnapshotRequest)

};

} // namespace RDS
} // namespace AWS

#endif
