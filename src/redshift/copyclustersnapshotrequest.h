// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_COPYCLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CopyClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT CopyClusterSnapshotRequest : public RedshiftRequest {

public:
    CopyClusterSnapshotRequest(const CopyClusterSnapshotRequest &other);
    CopyClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
