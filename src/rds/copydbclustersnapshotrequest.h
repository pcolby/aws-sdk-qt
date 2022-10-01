// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBClusterSnapshotRequestPrivate;

class QTAWSRDS_EXPORT CopyDBClusterSnapshotRequest : public RdsRequest {

public:
    CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other);
    CopyDBClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
