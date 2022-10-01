// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREADREPLICAREQUEST_H
#define QTAWS_CREATEDBINSTANCEREADREPLICAREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBInstanceReadReplicaRequestPrivate;

class QTAWSRDS_EXPORT CreateDBInstanceReadReplicaRequest : public RdsRequest {

public:
    CreateDBInstanceReadReplicaRequest(const CreateDBInstanceReadReplicaRequest &other);
    CreateDBInstanceReadReplicaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBInstanceReadReplicaRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
