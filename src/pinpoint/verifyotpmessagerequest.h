// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYOTPMESSAGEREQUEST_H
#define QTAWS_VERIFYOTPMESSAGEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class VerifyOTPMessageRequestPrivate;

class QTAWSPINPOINT_EXPORT VerifyOTPMessageRequest : public PinpointRequest {

public:
    VerifyOTPMessageRequest(const VerifyOTPMessageRequest &other);
    VerifyOTPMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyOTPMessageRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
