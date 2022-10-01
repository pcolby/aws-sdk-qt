// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERIAMROLESREQUEST_P_H
#define QTAWS_MODIFYCLUSTERIAMROLESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclusteriamrolesrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterIamRolesRequest;

class ModifyClusterIamRolesRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterIamRolesRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterIamRolesRequest * const q);
    ModifyClusterIamRolesRequestPrivate(const ModifyClusterIamRolesRequestPrivate &other,
                                   ModifyClusterIamRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterIamRolesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
