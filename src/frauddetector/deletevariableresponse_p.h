// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVARIABLERESPONSE_P_H
#define QTAWS_DELETEVARIABLERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteVariableResponse;

class DeleteVariableResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteVariableResponsePrivate(DeleteVariableResponse * const q);

    void parseDeleteVariableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVariableResponse)
    Q_DISABLE_COPY(DeleteVariableResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
