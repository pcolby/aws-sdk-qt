// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRXNORMINFERENCEJOBRESPONSE_P_H
#define QTAWS_STOPRXNORMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StopRxNormInferenceJobResponse;

class StopRxNormInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StopRxNormInferenceJobResponsePrivate(StopRxNormInferenceJobResponse * const q);

    void parseStopRxNormInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopRxNormInferenceJobResponse)
    Q_DISABLE_COPY(StopRxNormInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
