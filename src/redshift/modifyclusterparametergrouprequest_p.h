// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYCLUSTERPARAMETERGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterParameterGroupRequest;

class ModifyClusterParameterGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterParameterGroupRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterParameterGroupRequest * const q);
    ModifyClusterParameterGroupRequestPrivate(const ModifyClusterParameterGroupRequestPrivate &other,
                                   ModifyClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
