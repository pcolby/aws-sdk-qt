// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKRESPONSE_H
#define QTAWS_SUBMITFEEDBACKRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "submitfeedbackrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class SubmitFeedbackResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT SubmitFeedbackResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    SubmitFeedbackResponse(const SubmitFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitFeedbackResponse)
    Q_DISABLE_COPY(SubmitFeedbackResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
