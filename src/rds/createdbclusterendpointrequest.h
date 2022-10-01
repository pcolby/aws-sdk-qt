// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_H
#define QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterEndpointRequestPrivate;

class QTAWSRDS_EXPORT CreateDBClusterEndpointRequest : public RdsRequest {

public:
    CreateDBClusterEndpointRequest(const CreateDBClusterEndpointRequest &other);
    CreateDBClusterEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
