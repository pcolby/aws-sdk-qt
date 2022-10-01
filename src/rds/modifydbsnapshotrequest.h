// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTREQUEST_H
#define QTAWS_MODIFYDBSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBSnapshotRequest : public RdsRequest {

public:
    ModifyDBSnapshotRequest(const ModifyDBSnapshotRequest &other);
    ModifyDBSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
