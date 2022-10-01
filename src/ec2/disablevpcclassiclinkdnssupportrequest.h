// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTREQUEST_H
#define QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkDnsSupportRequestPrivate;

class QTAWSEC2_EXPORT DisableVpcClassicLinkDnsSupportRequest : public Ec2Request {

public:
    DisableVpcClassicLinkDnsSupportRequest(const DisableVpcClassicLinkDnsSupportRequest &other);
    DisableVpcClassicLinkDnsSupportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
