// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPLOYSYSTEMINSTANCEREQUEST_P_H
#define QTAWS_DEPLOYSYSTEMINSTANCEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deploysysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeploySystemInstanceRequest;

class DeploySystemInstanceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeploySystemInstanceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeploySystemInstanceRequest * const q);
    DeploySystemInstanceRequestPrivate(const DeploySystemInstanceRequestPrivate &other,
                                   DeploySystemInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeploySystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
