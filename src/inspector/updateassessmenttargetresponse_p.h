// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTTARGETRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTTARGETRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class UpdateAssessmentTargetResponse;

class UpdateAssessmentTargetResponsePrivate : public InspectorResponsePrivate {

public:

    explicit UpdateAssessmentTargetResponsePrivate(UpdateAssessmentTargetResponse * const q);

    void parseUpdateAssessmentTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentTargetResponse)
    Q_DISABLE_COPY(UpdateAssessmentTargetResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
