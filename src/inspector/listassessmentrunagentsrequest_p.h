// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNAGENTSREQUEST_P_H
#define QTAWS_LISTASSESSMENTRUNAGENTSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listassessmentrunagentsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunAgentsRequest;

class ListAssessmentRunAgentsRequestPrivate : public InspectorRequestPrivate {

public:
    ListAssessmentRunAgentsRequestPrivate(const InspectorRequest::Action action,
                                   ListAssessmentRunAgentsRequest * const q);
    ListAssessmentRunAgentsRequestPrivate(const ListAssessmentRunAgentsRequestPrivate &other,
                                   ListAssessmentRunAgentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentRunAgentsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
