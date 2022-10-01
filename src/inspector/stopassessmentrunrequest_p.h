// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRUNREQUEST_P_H
#define QTAWS_STOPASSESSMENTRUNREQUEST_P_H

#include "inspectorrequest_p.h"
#include "stopassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class StopAssessmentRunRequest;

class StopAssessmentRunRequestPrivate : public InspectorRequestPrivate {

public:
    StopAssessmentRunRequestPrivate(const InspectorRequest::Action action,
                                   StopAssessmentRunRequest * const q);
    StopAssessmentRunRequestPrivate(const StopAssessmentRunRequestPrivate &other,
                                   StopAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
