// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVARIABLERESPONSE_P_H
#define QTAWS_UPDATEVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateVariableResponse;

class UpdateVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateVariableResponsePrivate(UpdateVariableResponse * const q);

    void parseUpdateVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVariableResponse)
    Q_DISABLE_COPY(UpdateVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
