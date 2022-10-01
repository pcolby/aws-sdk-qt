// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTREQUEST_P_H
#define QTAWS_GETASSESSMENTREPORTREQUEST_P_H

#include "inspectorrequest_p.h"
#include "getassessmentreportrequest.h"

namespace QtAws {
namespace Inspector {

class GetAssessmentReportRequest;

class GetAssessmentReportRequestPrivate : public InspectorRequestPrivate {

public:
    GetAssessmentReportRequestPrivate(const InspectorRequest::Action action,
                                   GetAssessmentReportRequest * const q);
    GetAssessmentReportRequestPrivate(const GetAssessmentReportRequestPrivate &other,
                                   GetAssessmentReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssessmentReportRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
