// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3REQUEST_H
#define QTAWS_RESTOREDBINSTANCEFROMS3REQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromS3RequestPrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceFromS3Request : public RdsRequest {

public:
    RestoreDBInstanceFromS3Request(const RestoreDBInstanceFromS3Request &other);
    RestoreDBInstanceFromS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceFromS3Request)

};

} // namespace Rds
} // namespace QtAws

#endif
