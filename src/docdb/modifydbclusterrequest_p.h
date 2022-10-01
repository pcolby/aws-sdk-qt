// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifydbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterRequest;

class ModifyDBClusterRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyDBClusterRequestPrivate(const DocDbRequest::Action action,
                                   ModifyDBClusterRequest * const q);
    ModifyDBClusterRequestPrivate(const ModifyDBClusterRequestPrivate &other,
                                   ModifyDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
