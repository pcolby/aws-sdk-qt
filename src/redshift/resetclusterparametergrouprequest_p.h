// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETCLUSTERPARAMETERGROUPREQUEST_P_H

#include "redshiftrequest_p.h"
#include "resetclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class ResetClusterParameterGroupRequest;

class ResetClusterParameterGroupRequestPrivate : public RedshiftRequestPrivate {

public:
    ResetClusterParameterGroupRequestPrivate(const RedshiftRequest::Action action,
                                   ResetClusterParameterGroupRequest * const q);
    ResetClusterParameterGroupRequestPrivate(const ResetClusterParameterGroupRequestPrivate &other,
                                   ResetClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
