// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPICD10CMINFERENCEJOBRESPONSE_P_H
#define QTAWS_STOPICD10CMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StopICD10CMInferenceJobResponse;

class StopICD10CMInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StopICD10CMInferenceJobResponsePrivate(StopICD10CMInferenceJobResponse * const q);

    void parseStopICD10CMInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(StopICD10CMInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
