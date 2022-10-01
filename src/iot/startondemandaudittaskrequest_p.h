// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAUDITTASKREQUEST_P_H
#define QTAWS_STARTONDEMANDAUDITTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "startondemandaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class StartOnDemandAuditTaskRequest;

class StartOnDemandAuditTaskRequestPrivate : public IoTRequestPrivate {

public:
    StartOnDemandAuditTaskRequestPrivate(const IoTRequest::Action action,
                                   StartOnDemandAuditTaskRequest * const q);
    StartOnDemandAuditTaskRequestPrivate(const StartOnDemandAuditTaskRequestPrivate &other,
                                   StartOnDemandAuditTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartOnDemandAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
