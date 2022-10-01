// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLIENTVPNINGRESSREQUEST_H
#define QTAWS_AUTHORIZECLIENTVPNINGRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeClientVpnIngressRequestPrivate;

class QTAWSEC2_EXPORT AuthorizeClientVpnIngressRequest : public Ec2Request {

public:
    AuthorizeClientVpnIngressRequest(const AuthorizeClientVpnIngressRequest &other);
    AuthorizeClientVpnIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeClientVpnIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
