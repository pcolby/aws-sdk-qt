// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_STARTDETECTMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "startdetectmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class StartDetectMitigationActionsTaskRequest;

class StartDetectMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    StartDetectMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   StartDetectMitigationActionsTaskRequest * const q);
    StartDetectMitigationActionsTaskRequestPrivate(const StartDetectMitigationActionsTaskRequestPrivate &other,
                                   StartDetectMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
