// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREADREPLICARESPONSE_H
#define QTAWS_CREATEDBINSTANCEREADREPLICARESPONSE_H

#include "rdsresponse.h"
#include "createdbinstancereadreplicarequest.h"

namespace QtAws {
namespace Rds {

class CreateDBInstanceReadReplicaResponsePrivate;

class QTAWSRDS_EXPORT CreateDBInstanceReadReplicaResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBInstanceReadReplicaResponse(const CreateDBInstanceReadReplicaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBInstanceReadReplicaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBInstanceReadReplicaResponse)
    Q_DISABLE_COPY(CreateDBInstanceReadReplicaResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
