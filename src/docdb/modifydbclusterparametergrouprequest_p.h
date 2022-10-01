// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifydbclusterparametergrouprequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterParameterGroupRequest;

class ModifyDBClusterParameterGroupRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyDBClusterParameterGroupRequestPrivate(const DocDbRequest::Action action,
                                   ModifyDBClusterParameterGroupRequest * const q);
    ModifyDBClusterParameterGroupRequestPrivate(const ModifyDBClusterParameterGroupRequestPrivate &other,
                                   ModifyDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterParameterGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
