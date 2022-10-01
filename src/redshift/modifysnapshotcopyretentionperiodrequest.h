// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODREQUEST_H
#define QTAWS_MODIFYSNAPSHOTCOPYRETENTIONPERIODREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotCopyRetentionPeriodRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifySnapshotCopyRetentionPeriodRequest : public RedshiftRequest {

public:
    ModifySnapshotCopyRetentionPeriodRequest(const ModifySnapshotCopyRetentionPeriodRequest &other);
    ModifySnapshotCopyRetentionPeriodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotCopyRetentionPeriodRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
