// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRXNORMINFERENCEJOBRESPONSE_P_H
#define QTAWS_STARTRXNORMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StartRxNormInferenceJobResponse;

class StartRxNormInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StartRxNormInferenceJobResponsePrivate(StartRxNormInferenceJobResponse * const q);

    void parseStartRxNormInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRxNormInferenceJobResponse)
    Q_DISABLE_COPY(StartRxNormInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
