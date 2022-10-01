// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_RESTOREFROMCLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreFromClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT RestoreFromClusterSnapshotRequest : public RedshiftRequest {

public:
    RestoreFromClusterSnapshotRequest(const RestoreFromClusterSnapshotRequest &other);
    RestoreFromClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
