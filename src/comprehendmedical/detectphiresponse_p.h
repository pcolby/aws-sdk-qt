// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPHIRESPONSE_P_H
#define QTAWS_DETECTPHIRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectPHIResponse;

class DetectPHIResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DetectPHIResponsePrivate(DetectPHIResponse * const q);

    void parseDetectPHIResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectPHIResponse)
    Q_DISABLE_COPY(DetectPHIResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
