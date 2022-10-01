// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVERIFICATIONSTATEONVIOLATIONREQUEST_H
#define QTAWS_PUTVERIFICATIONSTATEONVIOLATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class PutVerificationStateOnViolationRequestPrivate;

class QTAWSIOT_EXPORT PutVerificationStateOnViolationRequest : public IoTRequest {

public:
    PutVerificationStateOnViolationRequest(const PutVerificationStateOnViolationRequest &other);
    PutVerificationStateOnViolationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVerificationStateOnViolationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
