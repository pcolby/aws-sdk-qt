// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPEGRESSRESPONSE_H
#define QTAWS_AUTHORIZESECURITYGROUPEGRESSRESPONSE_H

#include "ec2response.h"
#include "authorizesecuritygroupegressrequest.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupEgressResponsePrivate;

class QTAWSEC2_EXPORT AuthorizeSecurityGroupEgressResponse : public Ec2Response {
    Q_OBJECT

public:
    AuthorizeSecurityGroupEgressResponse(const AuthorizeSecurityGroupEgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeSecurityGroupEgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeSecurityGroupEgressResponse)
    Q_DISABLE_COPY(AuthorizeSecurityGroupEgressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
