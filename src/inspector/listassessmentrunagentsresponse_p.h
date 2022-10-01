// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNAGENTSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTRUNAGENTSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunAgentsResponse;

class ListAssessmentRunAgentsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListAssessmentRunAgentsResponsePrivate(ListAssessmentRunAgentsResponse * const q);

    void parseListAssessmentRunAgentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentRunAgentsResponse)
    Q_DISABLE_COPY(ListAssessmentRunAgentsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
