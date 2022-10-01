// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACESREQUEST_H
#define QTAWS_DESCRIBENETWORKINTERFACESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacesRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInterfacesRequest : public Ec2Request {

public:
    DescribeNetworkInterfacesRequest(const DescribeNetworkInterfacesRequest &other);
    DescribeNetworkInterfacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfacesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
