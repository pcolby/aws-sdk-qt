// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTARGETRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTTARGETRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTargetResponse;

class DeleteAssessmentTargetResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DeleteAssessmentTargetResponsePrivate(DeleteAssessmentTargetResponse * const q);

    void parseDeleteAssessmentTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentTargetResponse)
    Q_DISABLE_COPY(DeleteAssessmentTargetResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
