// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSREQUEST_H
#define QTAWS_REVOKECLUSTERSECURITYGROUPINGRESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeClusterSecurityGroupIngressRequestPrivate;

class QTAWSREDSHIFT_EXPORT RevokeClusterSecurityGroupIngressRequest : public RedshiftRequest {

public:
    RevokeClusterSecurityGroupIngressRequest(const RevokeClusterSecurityGroupIngressRequest &other);
    RevokeClusterSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeClusterSecurityGroupIngressRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
