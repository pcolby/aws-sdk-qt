// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTREQUEST_H
#define QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkDnsSupportRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcClassicLinkDnsSupportRequest : public Ec2Request {

public:
    DescribeVpcClassicLinkDnsSupportRequest(const DescribeVpcClassicLinkDnsSupportRequest &other);
    DescribeVpcClassicLinkDnsSupportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
