// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBINSTANCEREQUEST_H
#define QTAWS_ADDROLETODBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class AddRoleToDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT AddRoleToDBInstanceRequest : public RdsRequest {

public:
    AddRoleToDBInstanceRequest(const AddRoleToDBInstanceRequest &other);
    AddRoleToDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
