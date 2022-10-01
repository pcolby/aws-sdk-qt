// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVALUATIONSRESPONSE_P_H
#define QTAWS_PUTEVALUATIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutEvaluationsResponse;

class PutEvaluationsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutEvaluationsResponsePrivate(PutEvaluationsResponse * const q);

    void parsePutEvaluationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEvaluationsResponse)
    Q_DISABLE_COPY(PutEvaluationsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
