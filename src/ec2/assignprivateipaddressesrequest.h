// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNPRIVATEIPADDRESSESREQUEST_H
#define QTAWS_ASSIGNPRIVATEIPADDRESSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssignPrivateIpAddressesRequestPrivate;

class QTAWSEC2_EXPORT AssignPrivateIpAddressesRequest : public Ec2Request {

public:
    AssignPrivateIpAddressesRequest(const AssignPrivateIpAddressesRequest &other);
    AssignPrivateIpAddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignPrivateIpAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
