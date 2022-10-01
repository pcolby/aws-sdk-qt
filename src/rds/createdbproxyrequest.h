// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYREQUEST_H
#define QTAWS_CREATEDBPROXYREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyRequestPrivate;

class QTAWSRDS_EXPORT CreateDBProxyRequest : public RdsRequest {

public:
    CreateDBProxyRequest(const CreateDBProxyRequest &other);
    CreateDBProxyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBProxyRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
