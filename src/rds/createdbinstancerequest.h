// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREQUEST_H
#define QTAWS_CREATEDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT CreateDBInstanceRequest : public RdsRequest {

public:
    CreateDBInstanceRequest(const CreateDBInstanceRequest &other);
    CreateDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
