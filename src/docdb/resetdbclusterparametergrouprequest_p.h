// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "resetdbclusterparametergrouprequest.h"

namespace QtAws {
namespace DocDb {

class ResetDBClusterParameterGroupRequest;

class ResetDBClusterParameterGroupRequestPrivate : public DocDbRequestPrivate {

public:
    ResetDBClusterParameterGroupRequestPrivate(const DocDbRequest::Action action,
                                   ResetDBClusterParameterGroupRequest * const q);
    ResetDBClusterParameterGroupRequestPrivate(const ResetDBClusterParameterGroupRequestPrivate &other,
                                   ResetDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetDBClusterParameterGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
