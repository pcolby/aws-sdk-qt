// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTREQUEST_P_H
#define QTAWS_GETEVENTREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "geteventrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventRequest;

class GetEventRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetEventRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetEventRequest * const q);
    GetEventRequestPrivate(const GetEventRequestPrivate &other,
                                   GetEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
