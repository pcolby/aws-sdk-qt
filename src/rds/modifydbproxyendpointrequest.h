// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYENDPOINTREQUEST_H
#define QTAWS_MODIFYDBPROXYENDPOINTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyEndpointRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBProxyEndpointRequest : public RdsRequest {

public:
    ModifyDBProxyEndpointRequest(const ModifyDBProxyEndpointRequest &other);
    ModifyDBProxyEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
