// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSREQUEST_H
#define QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnTargetNetworksRequestPrivate;

class QTAWSEC2_EXPORT DescribeClientVpnTargetNetworksRequest : public Ec2Request {

public:
    DescribeClientVpnTargetNetworksRequest(const DescribeClientVpnTargetNetworksRequest &other);
    DescribeClientVpnTargetNetworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnTargetNetworksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
