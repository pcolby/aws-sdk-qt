// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONREQUEST_P_H
#define QTAWS_GETEVENTPREDICTIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "geteventpredictionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionRequest;

class GetEventPredictionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetEventPredictionRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetEventPredictionRequest * const q);
    GetEventPredictionRequestPrivate(const GetEventPredictionRequestPrivate &other,
                                   GetEventPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventPredictionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
