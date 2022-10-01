// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVARIABLERESPONSE_P_H
#define QTAWS_CREATEVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateVariableResponse;

class CreateVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateVariableResponsePrivate(CreateVariableResponse * const q);

    void parseCreateVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVariableResponse)
    Q_DISABLE_COPY(CreateVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
