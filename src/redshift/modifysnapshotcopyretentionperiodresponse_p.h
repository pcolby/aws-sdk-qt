// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODRESPONSE_P_H
#define QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotCopyRetentionPeriodResponse;

class ModifySnapshotCopyRetentionPeriodResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifySnapshotCopyRetentionPeriodResponsePrivate(ModifySnapshotCopyRetentionPeriodResponse * const q);

    void parseModifySnapshotCopyRetentionPeriodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotCopyRetentionPeriodResponse)
    Q_DISABLE_COPY(ModifySnapshotCopyRetentionPeriodResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
