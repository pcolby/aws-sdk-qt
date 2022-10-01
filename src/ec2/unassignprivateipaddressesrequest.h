// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNPRIVATEIPADDRESSESREQUEST_H
#define QTAWS_UNASSIGNPRIVATEIPADDRESSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class UnassignPrivateIpAddressesRequestPrivate;

class QTAWSEC2_EXPORT UnassignPrivateIpAddressesRequest : public Ec2Request {

public:
    UnassignPrivateIpAddressesRequest(const UnassignPrivateIpAddressesRequest &other);
    UnassignPrivateIpAddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignPrivateIpAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
