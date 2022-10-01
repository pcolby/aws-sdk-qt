// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXECUTIONREQUEST_P_H
#define QTAWS_STARTEXECUTIONREQUEST_P_H

#include "sfnrequest_p.h"
#include "startexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class StartExecutionRequest;

class StartExecutionRequestPrivate : public SfnRequestPrivate {

public:
    StartExecutionRequestPrivate(const SfnRequest::Action action,
                                   StartExecutionRequest * const q);
    StartExecutionRequestPrivate(const StartExecutionRequestPrivate &other,
                                   StartExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
