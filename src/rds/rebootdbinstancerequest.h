// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RebootDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT RebootDBInstanceRequest : public RdsRequest {

public:
    RebootDBInstanceRequest(const RebootDBInstanceRequest &other);
    RebootDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
