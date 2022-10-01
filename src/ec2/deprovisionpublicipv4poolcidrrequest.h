// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRREQUEST_H
#define QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionPublicIpv4PoolCidrRequestPrivate;

class QTAWSEC2_EXPORT DeprovisionPublicIpv4PoolCidrRequest : public Ec2Request {

public:
    DeprovisionPublicIpv4PoolCidrRequest(const DeprovisionPublicIpv4PoolCidrRequest &other);
    DeprovisionPublicIpv4PoolCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionPublicIpv4PoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
