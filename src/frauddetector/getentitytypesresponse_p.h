// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYTYPESRESPONSE_P_H
#define QTAWS_GETENTITYTYPESRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetEntityTypesResponse;

class GetEntityTypesResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetEntityTypesResponsePrivate(GetEntityTypesResponse * const q);

    void parseGetEntityTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEntityTypesResponse)
    Q_DISABLE_COPY(GetEntityTypesResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
