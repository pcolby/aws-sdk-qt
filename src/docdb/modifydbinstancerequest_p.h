// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCEREQUEST_P_H
#define QTAWS_MODIFYDBINSTANCEREQUEST_P_H

#include "docdbrequest_p.h"
#include "modifydbinstancerequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBInstanceRequest;

class ModifyDBInstanceRequestPrivate : public DocDbRequestPrivate {

public:
    ModifyDBInstanceRequestPrivate(const DocDbRequest::Action action,
                                   ModifyDBInstanceRequest * const q);
    ModifyDBInstanceRequestPrivate(const ModifyDBInstanceRequestPrivate &other,
                                   ModifyDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBInstanceRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
