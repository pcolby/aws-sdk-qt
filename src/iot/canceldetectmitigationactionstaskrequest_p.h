// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDETECTMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_CANCELDETECTMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "canceldetectmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelDetectMitigationActionsTaskRequest;

class CancelDetectMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    CancelDetectMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   CancelDetectMitigationActionsTaskRequest * const q);
    CancelDetectMitigationActionsTaskRequestPrivate(const CancelDetectMitigationActionsTaskRequestPrivate &other,
                                   CancelDetectMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
