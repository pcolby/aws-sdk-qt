// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_H
#define QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaDBClusterRequestPrivate;

class QTAWSRDS_EXPORT PromoteReadReplicaDBClusterRequest : public RdsRequest {

public:
    PromoteReadReplicaDBClusterRequest(const PromoteReadReplicaDBClusterRequest &other);
    PromoteReadReplicaDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteReadReplicaDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
