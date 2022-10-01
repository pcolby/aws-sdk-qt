// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMINSTANCEREQUEST_P_H
#define QTAWS_DELETESYSTEMINSTANCEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deletesysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemInstanceRequest;

class DeleteSystemInstanceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeleteSystemInstanceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeleteSystemInstanceRequest * const q);
    DeleteSystemInstanceRequestPrivate(const DeleteSystemInstanceRequestPrivate &other,
                                   DeleteSystemInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
