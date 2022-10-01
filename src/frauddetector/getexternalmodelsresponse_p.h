// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALMODELSRESPONSE_P_H
#define QTAWS_GETEXTERNALMODELSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetExternalModelsResponse;

class GetExternalModelsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetExternalModelsResponsePrivate(GetExternalModelsResponse * const q);

    void parseGetExternalModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExternalModelsResponse)
    Q_DISABLE_COPY(GetExternalModelsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
