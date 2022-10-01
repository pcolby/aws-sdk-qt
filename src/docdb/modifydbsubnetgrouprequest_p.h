// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPREQUEST_P_H
#define QTAWS_MODIFYDBSUBNETGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifydbsubnetgrouprequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBSubnetGroupRequest;

class ModifyDBSubnetGroupRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyDBSubnetGroupRequestPrivate(const DocDbRequest::Action action,
                                   ModifyDBSubnetGroupRequest * const q);
    ModifyDBSubnetGroupRequestPrivate(const ModifyDBSubnetGroupRequestPrivate &other,
                                   ModifyDBSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBSubnetGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
