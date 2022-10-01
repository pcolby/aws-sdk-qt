// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSUBNETGROUPREQUEST_P_H
#define QTAWS_CREATECLUSTERSUBNETGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSubnetGroupRequest;

class CreateClusterSubnetGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateClusterSubnetGroupRequestPrivate(const RedshiftRequest::Action action,
                                   CreateClusterSubnetGroupRequest * const q);
    CreateClusterSubnetGroupRequestPrivate(const CreateClusterSubnetGroupRequestPrivate &other,
                                   CreateClusterSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterSubnetGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
