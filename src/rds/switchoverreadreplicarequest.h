// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWITCHOVERREADREPLICAREQUEST_H
#define QTAWS_SWITCHOVERREADREPLICAREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class SwitchoverReadReplicaRequestPrivate;

class QTAWSRDS_EXPORT SwitchoverReadReplicaRequest : public RdsRequest {

public:
    SwitchoverReadReplicaRequest(const SwitchoverReadReplicaRequest &other);
    SwitchoverReadReplicaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwitchoverReadReplicaRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
