// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSUBNETGROUPREQUEST_P_H
#define QTAWS_MODIFYCLUSTERSUBNETGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSubnetGroupRequest;

class ModifyClusterSubnetGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterSubnetGroupRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterSubnetGroupRequest * const q);
    ModifyClusterSubnetGroupRequestPrivate(const ModifyClusterSubnetGroupRequestPrivate &other,
                                   ModifyClusterSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSubnetGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
