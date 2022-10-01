// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBINSTANCEREQUEST_H
#define QTAWS_REMOVEROLEFROMDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT RemoveRoleFromDBInstanceRequest : public RdsRequest {

public:
    RemoveRoleFromDBInstanceRequest(const RemoveRoleFromDBInstanceRequest &other);
    RemoveRoleFromDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
