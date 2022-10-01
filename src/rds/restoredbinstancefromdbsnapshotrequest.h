// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_H
#define QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromDBSnapshotRequestPrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceFromDBSnapshotRequest : public RdsRequest {

public:
    RestoreDBInstanceFromDBSnapshotRequest(const RestoreDBInstanceFromDBSnapshotRequest &other);
    RestoreDBInstanceFromDBSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceFromDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
