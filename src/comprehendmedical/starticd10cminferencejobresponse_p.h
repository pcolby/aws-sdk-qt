// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTICD10CMINFERENCEJOBRESPONSE_P_H
#define QTAWS_STARTICD10CMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StartICD10CMInferenceJobResponse;

class StartICD10CMInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StartICD10CMInferenceJobResponsePrivate(StartICD10CMInferenceJobResponse * const q);

    void parseStartICD10CMInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(StartICD10CMInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
