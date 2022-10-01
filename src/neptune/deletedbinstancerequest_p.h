// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEREQUEST_P_H
#define QTAWS_DELETEDBINSTANCEREQUEST_P_H

#include "neptunerequest_p.h"
#include "deletedbinstancerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBInstanceRequest;

class DeleteDBInstanceRequestPrivate : public NeptuneRequestPrivate {

public:
    DeleteDBInstanceRequestPrivate(const NeptuneRequest::Action action,
                                   DeleteDBInstanceRequest * const q);
    DeleteDBInstanceRequestPrivate(const DeleteDBInstanceRequestPrivate &other,
                                   DeleteDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
