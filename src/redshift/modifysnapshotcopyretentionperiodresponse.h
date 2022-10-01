// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODRESPONSE_H
#define QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODRESPONSE_H

#include "redshiftresponse.h"
#include "modifysnapshotcopyretentionperiodrequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotCopyRetentionPeriodResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifySnapshotCopyRetentionPeriodResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifySnapshotCopyRetentionPeriodResponse(const ModifySnapshotCopyRetentionPeriodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySnapshotCopyRetentionPeriodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotCopyRetentionPeriodResponse)
    Q_DISABLE_COPY(ModifySnapshotCopyRetentionPeriodResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
