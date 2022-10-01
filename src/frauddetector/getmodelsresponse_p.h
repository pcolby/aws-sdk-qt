// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSRESPONSE_P_H
#define QTAWS_GETMODELSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetModelsResponse;

class GetModelsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetModelsResponsePrivate(GetModelsResponse * const q);

    void parseGetModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelsResponse)
    Q_DISABLE_COPY(GetModelsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
