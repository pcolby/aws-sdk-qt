// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXECUTIONREQUEST_P_H
#define QTAWS_STOPEXECUTIONREQUEST_P_H

#include "sfnrequest_p.h"
#include "stopexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class StopExecutionRequest;

class StopExecutionRequestPrivate : public SfnRequestPrivate {

public:
    StopExecutionRequestPrivate(const SfnRequest::Action action,
                                   StopExecutionRequest * const q);
    StopExecutionRequestPrivate(const StopExecutionRequestPrivate &other,
                                   StopExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
