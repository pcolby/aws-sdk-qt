// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_REVOKESECURITYGROUPINGRESSRESPONSE_H

#include "ec2response.h"
#include "revokesecuritygroupingressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupIngressResponsePrivate;

class QTAWSEC2_EXPORT RevokeSecurityGroupIngressResponse : public Ec2Response {
    Q_OBJECT

public:
    RevokeSecurityGroupIngressResponse(const RevokeSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeSecurityGroupIngressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
