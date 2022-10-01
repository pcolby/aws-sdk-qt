// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTREQUEST_P_H
#define QTAWS_SENDEVENTREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "sendeventrequest.h"

namespace QtAws {
namespace FraudDetector {

class SendEventRequest;

class SendEventRequestPrivate : public FraudDetectorRequestPrivate {

public:
    SendEventRequestPrivate(const FraudDetectorRequest::Action action,
                                   SendEventRequest * const q);
    SendEventRequestPrivate(const SendEventRequestPrivate &other,
                                   SendEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendEventRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
