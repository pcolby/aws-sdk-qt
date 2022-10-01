// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSECURITYGROUPREQUEST_P_H
#define QTAWS_DELETECLUSTERSECURITYGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteclustersecuritygrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSecurityGroupRequest;

class DeleteClusterSecurityGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteClusterSecurityGroupRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteClusterSecurityGroupRequest * const q);
    DeleteClusterSecurityGroupRequestPrivate(const DeleteClusterSecurityGroupRequestPrivate &other,
                                   DeleteClusterSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSecurityGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
