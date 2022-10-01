// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCEREQUEST_H
#define QTAWS_STARTDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT StartDBInstanceRequest : public RdsRequest {

public:
    StartDBInstanceRequest(const StartDBInstanceRequest &other);
    StartDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
