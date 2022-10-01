// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYENDPOINTREQUEST_H
#define QTAWS_DELETEDBPROXYENDPOINTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyEndpointRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBProxyEndpointRequest : public RdsRequest {

public:
    DeleteDBProxyEndpointRequest(const DeleteDBProxyEndpointRequest &other);
    DeleteDBProxyEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
