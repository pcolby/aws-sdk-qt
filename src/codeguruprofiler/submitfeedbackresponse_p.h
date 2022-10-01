// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKRESPONSE_P_H
#define QTAWS_SUBMITFEEDBACKRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class SubmitFeedbackResponse;

class SubmitFeedbackResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit SubmitFeedbackResponsePrivate(SubmitFeedbackResponse * const q);

    void parseSubmitFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubmitFeedbackResponse)
    Q_DISABLE_COPY(SubmitFeedbackResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
