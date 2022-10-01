// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLEVALUATIONTASKRUNREQUEST_P_H
#define QTAWS_STARTMLEVALUATIONTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startmlevaluationtaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartMLEvaluationTaskRunRequest;

class StartMLEvaluationTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    StartMLEvaluationTaskRunRequestPrivate(const GlueRequest::Action action,
                                   StartMLEvaluationTaskRunRequest * const q);
    StartMLEvaluationTaskRunRequestPrivate(const StartMLEvaluationTaskRunRequestPrivate &other,
                                   StartMLEvaluationTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMLEvaluationTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
