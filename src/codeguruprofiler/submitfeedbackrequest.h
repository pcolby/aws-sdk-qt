// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKREQUEST_H
#define QTAWS_SUBMITFEEDBACKREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class SubmitFeedbackRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT SubmitFeedbackRequest : public CodeGuruProfilerRequest {

public:
    SubmitFeedbackRequest(const SubmitFeedbackRequest &other);
    SubmitFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitFeedbackRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
