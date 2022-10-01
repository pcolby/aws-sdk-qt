// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERREQUEST_P_H
#define QTAWS_MODIFYGLOBALCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifyglobalclusterrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyGlobalClusterRequest;

class ModifyGlobalClusterRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyGlobalClusterRequestPrivate(const DocDbRequest::Action action,
                                   ModifyGlobalClusterRequest * const q);
    ModifyGlobalClusterRequestPrivate(const ModifyGlobalClusterRequestPrivate &other,
                                   ModifyGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
