// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDBSECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_REVOKEDBSECURITYGROUPINGRESSRESPONSE_H

#include "rdsresponse.h"
#include "revokedbsecuritygroupingressrequest.h"

namespace QtAws {
namespace Rds {

class RevokeDBSecurityGroupIngressResponsePrivate;

class QTAWSRDS_EXPORT RevokeDBSecurityGroupIngressResponse : public RdsResponse {
    Q_OBJECT

public:
    RevokeDBSecurityGroupIngressResponse(const RevokeDBSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeDBSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeDBSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeDBSecurityGroupIngressResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
