// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEREQUEST_H
#define QTAWS_STOPDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT StopDBInstanceRequest : public RdsRequest {

public:
    StopDBInstanceRequest(const StopDBInstanceRequest &other);
    StopDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
