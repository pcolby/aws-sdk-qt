// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacePermissionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInterfacePermissionsRequest : public Ec2Request {

public:
    DescribeNetworkInterfacePermissionsRequest(const DescribeNetworkInterfacePermissionsRequest &other);
    DescribeNetworkInterfacePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfacePermissionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
