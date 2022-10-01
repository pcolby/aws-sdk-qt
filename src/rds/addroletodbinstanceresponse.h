// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBINSTANCERESPONSE_H
#define QTAWS_ADDROLETODBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "addroletodbinstancerequest.h"

namespace QtAws {
namespace Rds {

class AddRoleToDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT AddRoleToDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    AddRoleToDBInstanceResponse(const AddRoleToDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddRoleToDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToDBInstanceResponse)
    Q_DISABLE_COPY(AddRoleToDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
