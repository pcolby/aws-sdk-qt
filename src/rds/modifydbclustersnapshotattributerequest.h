// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterSnapshotAttributeRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBClusterSnapshotAttributeRequest : public RdsRequest {

public:
    ModifyDBClusterSnapshotAttributeRequest(const ModifyDBClusterSnapshotAttributeRequest &other);
    ModifyDBClusterSnapshotAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterSnapshotAttributeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
