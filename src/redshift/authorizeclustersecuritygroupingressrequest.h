// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSREQUEST_H
#define QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeClusterSecurityGroupIngressRequestPrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeClusterSecurityGroupIngressRequest : public RedshiftRequest {

public:
    AuthorizeClusterSecurityGroupIngressRequest(const AuthorizeClusterSecurityGroupIngressRequest &other);
    AuthorizeClusterSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeClusterSecurityGroupIngressRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
