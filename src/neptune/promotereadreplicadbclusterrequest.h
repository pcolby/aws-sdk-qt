// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_H
#define QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class PromoteReadReplicaDBClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT PromoteReadReplicaDBClusterRequest : public NeptuneRequest {

public:
    PromoteReadReplicaDBClusterRequest(const PromoteReadReplicaDBClusterRequest &other);
    PromoteReadReplicaDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteReadReplicaDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
