// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDHCPOPTIONSREQUEST_H
#define QTAWS_DESCRIBEDHCPOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeDhcpOptionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeDhcpOptionsRequest : public Ec2Request {

public:
    DescribeDhcpOptionsRequest(const DescribeDhcpOptionsRequest &other);
    DescribeDhcpOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
