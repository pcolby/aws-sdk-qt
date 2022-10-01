// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreTableFromClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT RestoreTableFromClusterSnapshotRequest : public RedshiftRequest {

public:
    RestoreTableFromClusterSnapshotRequest(const RestoreTableFromClusterSnapshotRequest &other);
    RestoreTableFromClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableFromClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
