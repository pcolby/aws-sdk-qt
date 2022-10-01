// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSREQUEST_H
#define QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class AuthorizeDBSecurityGroupIngressRequestPrivate;

class QTAWSRDS_EXPORT AuthorizeDBSecurityGroupIngressRequest : public RdsRequest {

public:
    AuthorizeDBSecurityGroupIngressRequest(const AuthorizeDBSecurityGroupIngressRequest &other);
    AuthorizeDBSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeDBSecurityGroupIngressRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
