// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBECLIENTVPNCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnConnectionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeClientVpnConnectionsRequest : public Ec2Request {

public:
    DescribeClientVpnConnectionsRequest(const DescribeClientVpnConnectionsRequest &other);
    DescribeClientVpnConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
