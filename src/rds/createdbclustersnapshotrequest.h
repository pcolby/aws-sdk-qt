// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterSnapshotRequestPrivate;

class QTAWSRDS_EXPORT CreateDBClusterSnapshotRequest : public RdsRequest {

public:
    CreateDBClusterSnapshotRequest(const CreateDBClusterSnapshotRequest &other);
    CreateDBClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
