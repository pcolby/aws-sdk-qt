// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSRESPONSE_H

#include "redshiftresponse.h"
#include "revokeclustersecuritygroupingressrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeClusterSecurityGroupIngressResponsePrivate;

class QTAWSREDSHIFT_EXPORT RevokeClusterSecurityGroupIngressResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RevokeClusterSecurityGroupIngressResponse(const RevokeClusterSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeClusterSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeClusterSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeClusterSecurityGroupIngressResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
