// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTARGETSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTTARGETSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTargetsResponse;

class ListAssessmentTargetsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListAssessmentTargetsResponsePrivate(ListAssessmentTargetsResponse * const q);

    void parseListAssessmentTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentTargetsResponse)
    Q_DISABLE_COPY(ListAssessmentTargetsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
