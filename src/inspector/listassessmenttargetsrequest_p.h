// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTARGETSREQUEST_P_H
#define QTAWS_LISTASSESSMENTTARGETSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listassessmenttargetsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTargetsRequest;

class ListAssessmentTargetsRequestPrivate : public InspectorRequestPrivate {

public:
    ListAssessmentTargetsRequestPrivate(const InspectorRequest::Action action,
                                   ListAssessmentTargetsRequest * const q);
    ListAssessmentTargetsRequestPrivate(const ListAssessmentTargetsRequestPrivate &other,
                                   ListAssessmentTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentTargetsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
