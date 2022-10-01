// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRUNRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTRUNRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentRunResponse;

class DeleteAssessmentRunResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DeleteAssessmentRunResponsePrivate(DeleteAssessmentRunResponse * const q);

    void parseDeleteAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentRunResponse)
    Q_DISABLE_COPY(DeleteAssessmentRunResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
