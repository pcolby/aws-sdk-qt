// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTARGETRESPONSE_P_H
#define QTAWS_CREATEASSESSMENTTARGETRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTargetResponse;

class CreateAssessmentTargetResponsePrivate : public InspectorResponsePrivate {

public:

    explicit CreateAssessmentTargetResponsePrivate(CreateAssessmentTargetResponse * const q);

    void parseCreateAssessmentTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentTargetResponse)
    Q_DISABLE_COPY(CreateAssessmentTargetResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
