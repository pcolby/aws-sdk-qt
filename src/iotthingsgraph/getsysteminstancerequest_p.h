// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMINSTANCEREQUEST_P_H
#define QTAWS_GETSYSTEMINSTANCEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getsysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemInstanceRequest;

class GetSystemInstanceRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetSystemInstanceRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetSystemInstanceRequest * const q);
    GetSystemInstanceRequestPrivate(const GetSystemInstanceRequestPrivate &other,
                                   GetSystemInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
