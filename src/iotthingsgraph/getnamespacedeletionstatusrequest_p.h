// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEDELETIONSTATUSREQUEST_P_H
#define QTAWS_GETNAMESPACEDELETIONSTATUSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getnamespacedeletionstatusrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetNamespaceDeletionStatusRequest;

class GetNamespaceDeletionStatusRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetNamespaceDeletionStatusRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetNamespaceDeletionStatusRequest * const q);
    GetNamespaceDeletionStatusRequestPrivate(const GetNamespaceDeletionStatusRequestPrivate &other,
                                   GetNamespaceDeletionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNamespaceDeletionStatusRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
