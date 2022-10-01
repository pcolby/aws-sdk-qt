// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITTASKREQUEST_P_H
#define QTAWS_CANCELAUDITTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "cancelaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditTaskRequest;

class CancelAuditTaskRequestPrivate : public IoTRequestPrivate {

public:
    CancelAuditTaskRequestPrivate(const IoTRequest::Action action,
                                   CancelAuditTaskRequest * const q);
    CancelAuditTaskRequestPrivate(const CancelAuditTaskRequestPrivate &other,
                                   CancelAuditTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
