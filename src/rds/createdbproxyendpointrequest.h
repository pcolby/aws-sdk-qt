// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYENDPOINTREQUEST_H
#define QTAWS_CREATEDBPROXYENDPOINTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyEndpointRequestPrivate;

class QTAWSRDS_EXPORT CreateDBProxyEndpointRequest : public RdsRequest {

public:
    CreateDBProxyEndpointRequest(const CreateDBProxyEndpointRequest &other);
    CreateDBProxyEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
