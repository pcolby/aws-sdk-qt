// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPUBLICIPV4POOLCIDRREQUEST_H
#define QTAWS_PROVISIONPUBLICIPV4POOLCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ProvisionPublicIpv4PoolCidrRequestPrivate;

class QTAWSEC2_EXPORT ProvisionPublicIpv4PoolCidrRequest : public Ec2Request {

public:
    ProvisionPublicIpv4PoolCidrRequest(const ProvisionPublicIpv4PoolCidrRequest &other);
    ProvisionPublicIpv4PoolCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionPublicIpv4PoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
