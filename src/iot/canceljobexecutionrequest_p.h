// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBEXECUTIONREQUEST_P_H
#define QTAWS_CANCELJOBEXECUTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "canceljobexecutionrequest.h"

namespace QtAws {
namespace IoT {

class CancelJobExecutionRequest;

class CancelJobExecutionRequestPrivate : public IoTRequestPrivate {

public:
    CancelJobExecutionRequestPrivate(const IoTRequest::Action action,
                                   CancelJobExecutionRequest * const q);
    CancelJobExecutionRequestPrivate(const CancelJobExecutionRequestPrivate &other,
                                   CancelJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelJobExecutionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
