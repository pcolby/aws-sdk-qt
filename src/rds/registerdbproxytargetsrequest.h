// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDBPROXYTARGETSREQUEST_H
#define QTAWS_REGISTERDBPROXYTARGETSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RegisterDBProxyTargetsRequestPrivate;

class QTAWSRDS_EXPORT RegisterDBProxyTargetsRequest : public RdsRequest {

public:
    RegisterDBProxyTargetsRequest(const RegisterDBProxyTargetsRequest &other);
    RegisterDBProxyTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDBProxyTargetsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
