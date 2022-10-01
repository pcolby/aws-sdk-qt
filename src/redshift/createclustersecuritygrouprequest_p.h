// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSECURITYGROUPREQUEST_P_H
#define QTAWS_CREATECLUSTERSECURITYGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createclustersecuritygrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSecurityGroupRequest;

class CreateClusterSecurityGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateClusterSecurityGroupRequestPrivate(const RedshiftRequest::Action action,
                                   CreateClusterSecurityGroupRequest * const q);
    CreateClusterSecurityGroupRequestPrivate(const CreateClusterSecurityGroupRequestPrivate &other,
                                   CreateClusterSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterSecurityGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
