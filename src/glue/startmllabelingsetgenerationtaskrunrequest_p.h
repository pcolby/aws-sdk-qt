// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNREQUEST_P_H
#define QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startmllabelingsetgenerationtaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartMLLabelingSetGenerationTaskRunRequest;

class StartMLLabelingSetGenerationTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    StartMLLabelingSetGenerationTaskRunRequestPrivate(const GlueRequest::Action action,
                                   StartMLLabelingSetGenerationTaskRunRequest * const q);
    StartMLLabelingSetGenerationTaskRunRequestPrivate(const StartMLLabelingSetGenerationTaskRunRequestPrivate &other,
                                   StartMLLabelingSetGenerationTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMLLabelingSetGenerationTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
