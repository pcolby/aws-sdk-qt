// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTEMPLATESREQUEST_P_H
#define QTAWS_LISTASSESSMENTTEMPLATESREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listassessmenttemplatesrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTemplatesRequest;

class ListAssessmentTemplatesRequestPrivate : public InspectorRequestPrivate {

public:
    ListAssessmentTemplatesRequestPrivate(const InspectorRequest::Action action,
                                   ListAssessmentTemplatesRequest * const q);
    ListAssessmentTemplatesRequestPrivate(const ListAssessmentTemplatesRequestPrivate &other,
                                   ListAssessmentTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentTemplatesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
