// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPLOYSYSTEMINSTANCEREQUEST_P_H
#define QTAWS_UNDEPLOYSYSTEMINSTANCEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "undeploysysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UndeploySystemInstanceRequest;

class UndeploySystemInstanceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    UndeploySystemInstanceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   UndeploySystemInstanceRequest * const q);
    UndeploySystemInstanceRequestPrivate(const UndeploySystemInstanceRequestPrivate &other,
                                   UndeploySystemInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UndeploySystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
