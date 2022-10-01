// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNROUTESREQUEST_H
#define QTAWS_DESCRIBECLIENTVPNROUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnRoutesRequestPrivate;

class QTAWSEC2_EXPORT DescribeClientVpnRoutesRequest : public Ec2Request {

public:
    DescribeClientVpnRoutesRequest(const DescribeClientVpnRoutesRequest &other);
    DescribeClientVpnRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
