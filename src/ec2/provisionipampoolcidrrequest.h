// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONIPAMPOOLCIDRREQUEST_H
#define QTAWS_PROVISIONIPAMPOOLCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ProvisionIpamPoolCidrRequestPrivate;

class QTAWSEC2_EXPORT ProvisionIpamPoolCidrRequest : public Ec2Request {

public:
    ProvisionIpamPoolCidrRequest(const ProvisionIpamPoolCidrRequest &other);
    ProvisionIpamPoolCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
