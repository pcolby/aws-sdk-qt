// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONIPAMPOOLCIDRREQUEST_H
#define QTAWS_DEPROVISIONIPAMPOOLCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionIpamPoolCidrRequestPrivate;

class QTAWSEC2_EXPORT DeprovisionIpamPoolCidrRequest : public Ec2Request {

public:
    DeprovisionIpamPoolCidrRequest(const DeprovisionIpamPoolCidrRequest &other);
    DeprovisionIpamPoolCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
