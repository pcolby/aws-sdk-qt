// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTREQUEST_H
#define QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkDnsSupportRequestPrivate;

class QTAWSEC2_EXPORT EnableVpcClassicLinkDnsSupportRequest : public Ec2Request {

public:
    EnableVpcClassicLinkDnsSupportRequest(const EnableVpcClassicLinkDnsSupportRequest &other);
    EnableVpcClassicLinkDnsSupportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
