// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSUBNETGROUPREQUEST_P_H
#define QTAWS_DELETECLUSTERSUBNETGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSubnetGroupRequest;

class DeleteClusterSubnetGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteClusterSubnetGroupRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteClusterSubnetGroupRequest * const q);
    DeleteClusterSubnetGroupRequestPrivate(const DeleteClusterSubnetGroupRequestPrivate &other,
                                   DeleteClusterSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSubnetGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
