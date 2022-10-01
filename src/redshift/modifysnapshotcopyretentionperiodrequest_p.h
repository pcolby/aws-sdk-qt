// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODREQUEST_P_H
#define QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifysnapshotcopyretentionperiodrequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotCopyRetentionPeriodRequest;

class ModifySnapshotCopyRetentionPeriodRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifySnapshotCopyRetentionPeriodRequestPrivate(const RedshiftRequest::Action action,
                                   ModifySnapshotCopyRetentionPeriodRequest * const q);
    ModifySnapshotCopyRetentionPeriodRequestPrivate(const ModifySnapshotCopyRetentionPeriodRequestPrivate &other,
                                   ModifySnapshotCopyRetentionPeriodRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotCopyRetentionPeriodRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
