// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPINGRESSREQUEST_H
#define QTAWS_REVOKESECURITYGROUPINGRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupIngressRequestPrivate;

class QTAWSEC2_EXPORT RevokeSecurityGroupIngressRequest : public Ec2Request {

public:
    RevokeSecurityGroupIngressRequest(const RevokeSecurityGroupIngressRequest &other);
    RevokeSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSecurityGroupIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
