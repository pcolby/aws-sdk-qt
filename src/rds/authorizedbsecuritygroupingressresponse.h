// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSRESPONSE_H

#include "rdsresponse.h"
#include "authorizedbsecuritygroupingressrequest.h"

namespace QtAws {
namespace Rds {

class AuthorizeDBSecurityGroupIngressResponsePrivate;

class QTAWSRDS_EXPORT AuthorizeDBSecurityGroupIngressResponse : public RdsResponse {
    Q_OBJECT

public:
    AuthorizeDBSecurityGroupIngressResponse(const AuthorizeDBSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeDBSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeDBSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeDBSecurityGroupIngressResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
