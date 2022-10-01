// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKREQUEST_H
#define QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateClientVpnTargetNetworkRequestPrivate;

class QTAWSEC2_EXPORT AssociateClientVpnTargetNetworkRequest : public Ec2Request {

public:
    AssociateClientVpnTargetNetworkRequest(const AssociateClientVpnTargetNetworkRequest &other);
    AssociateClientVpnTargetNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateClientVpnTargetNetworkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
