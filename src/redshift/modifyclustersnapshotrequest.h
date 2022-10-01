// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterSnapshotRequest : public RedshiftRequest {

public:
    ModifyClusterSnapshotRequest(const ModifyClusterSnapshotRequest &other);
    ModifyClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
