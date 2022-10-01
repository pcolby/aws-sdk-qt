// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNSREQUEST_P_H
#define QTAWS_LISTASSESSMENTRUNSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listassessmentrunsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunsRequest;

class ListAssessmentRunsRequestPrivate : public InspectorRequestPrivate {

public:
    ListAssessmentRunsRequestPrivate(const InspectorRequest::Action action,
                                   ListAssessmentRunsRequest * const q);
    ListAssessmentRunsRequestPrivate(const ListAssessmentRunsRequestPrivate &other,
                                   ListAssessmentRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentRunsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
