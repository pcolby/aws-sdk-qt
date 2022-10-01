// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSYNCEXECUTIONREQUEST_P_H
#define QTAWS_STARTSYNCEXECUTIONREQUEST_P_H

#include "sfnrequest_p.h"
#include "startsyncexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class StartSyncExecutionRequest;

class StartSyncExecutionRequestPrivate : public SfnRequestPrivate {

public:
    StartSyncExecutionRequestPrivate(const SfnRequest::Action action,
                                   StartSyncExecutionRequest * const q);
    StartSyncExecutionRequestPrivate(const StartSyncExecutionRequestPrivate &other,
                                   StartSyncExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSyncExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
