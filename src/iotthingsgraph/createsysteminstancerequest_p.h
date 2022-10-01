// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMINSTANCEREQUEST_P_H
#define QTAWS_CREATESYSTEMINSTANCEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "createsysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemInstanceRequest;

class CreateSystemInstanceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    CreateSystemInstanceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   CreateSystemInstanceRequest * const q);
    CreateSystemInstanceRequestPrivate(const CreateSystemInstanceRequestPrivate &other,
                                   CreateSystemInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
