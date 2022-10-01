// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCEREQUEST_P_H
#define QTAWS_MODIFYDBINSTANCEREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbinstancerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBInstanceRequest;

class ModifyDBInstanceRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBInstanceRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBInstanceRequest * const q);
    ModifyDBInstanceRequestPrivate(const ModifyDBInstanceRequestPrivate &other,
                                   ModifyDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
