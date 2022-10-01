// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVERIFICATIONSTATEONVIOLATIONRESPONSE_H
#define QTAWS_PUTVERIFICATIONSTATEONVIOLATIONRESPONSE_H

#include "iotresponse.h"
#include "putverificationstateonviolationrequest.h"

namespace QtAws {
namespace IoT {

class PutVerificationStateOnViolationResponsePrivate;

class QTAWSIOT_EXPORT PutVerificationStateOnViolationResponse : public IoTResponse {
    Q_OBJECT

public:
    PutVerificationStateOnViolationResponse(const PutVerificationStateOnViolationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVerificationStateOnViolationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVerificationStateOnViolationResponse)
    Q_DISABLE_COPY(PutVerificationStateOnViolationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
