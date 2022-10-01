// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKREQUEST_H
#define QTAWS_DESCRIBEVPCCLASSICLINKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcClassicLinkRequest : public Ec2Request {

public:
    DescribeVpcClassicLinkRequest(const DescribeVpcClassicLinkRequest &other);
    DescribeVpcClassicLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
