// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKREQUEST_P_H
#define QTAWS_SUBMITFEEDBACKREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "submitfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class SubmitFeedbackRequest;

class SubmitFeedbackRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    SubmitFeedbackRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   SubmitFeedbackRequest * const q);
    SubmitFeedbackRequestPrivate(const SubmitFeedbackRequestPrivate &other,
                                   SubmitFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitFeedbackRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
