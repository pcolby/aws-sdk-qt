// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_AUTHORIZESECURITYGROUPINGRESSRESPONSE_H

#include "ec2response.h"
#include "authorizesecuritygroupingressrequest.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupIngressResponsePrivate;

class QTAWSEC2_EXPORT AuthorizeSecurityGroupIngressResponse : public Ec2Response {
    Q_OBJECT

public:
    AuthorizeSecurityGroupIngressResponse(const AuthorizeSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeSecurityGroupIngressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
