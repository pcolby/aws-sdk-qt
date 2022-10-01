// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTTYPESRESPONSE_P_H
#define QTAWS_GETEVENTTYPESRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetEventTypesResponse;

class GetEventTypesResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetEventTypesResponsePrivate(GetEventTypesResponse * const q);

    void parseGetEventTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventTypesResponse)
    Q_DISABLE_COPY(GetEventTypesResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
