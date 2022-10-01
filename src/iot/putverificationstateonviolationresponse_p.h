// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVERIFICATIONSTATEONVIOLATIONRESPONSE_P_H
#define QTAWS_PUTVERIFICATIONSTATEONVIOLATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class PutVerificationStateOnViolationResponse;

class PutVerificationStateOnViolationResponsePrivate : public IoTResponsePrivate {

public:

    explicit PutVerificationStateOnViolationResponsePrivate(PutVerificationStateOnViolationResponse * const q);

    void parsePutVerificationStateOnViolationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVerificationStateOnViolationResponse)
    Q_DISABLE_COPY(PutVerificationStateOnViolationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
