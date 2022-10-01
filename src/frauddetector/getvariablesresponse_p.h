// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVARIABLESRESPONSE_P_H
#define QTAWS_GETVARIABLESRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetVariablesResponse;

class GetVariablesResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetVariablesResponsePrivate(GetVariablesResponse * const q);

    void parseGetVariablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVariablesResponse)
    Q_DISABLE_COPY(GetVariablesResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
