// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSRESPONSE_H

#include "redshiftresponse.h"
#include "authorizeclustersecuritygroupingressrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeClusterSecurityGroupIngressResponsePrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeClusterSecurityGroupIngressResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AuthorizeClusterSecurityGroupIngressResponse(const AuthorizeClusterSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeClusterSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeClusterSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeClusterSecurityGroupIngressResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
