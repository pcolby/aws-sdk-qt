// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALEVALUATIONRESPONSE_P_H
#define QTAWS_PUTEXTERNALEVALUATIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutExternalEvaluationResponse;

class PutExternalEvaluationResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutExternalEvaluationResponsePrivate(PutExternalEvaluationResponse * const q);

    void parsePutExternalEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutExternalEvaluationResponse)
    Q_DISABLE_COPY(PutExternalEvaluationResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
