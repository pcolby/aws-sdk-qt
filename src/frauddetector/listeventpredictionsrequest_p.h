// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTPREDICTIONSREQUEST_P_H
#define QTAWS_LISTEVENTPREDICTIONSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "listeventpredictionsrequest.h"

namespace QtAws {
namespace FraudDetector {

class ListEventPredictionsRequest;

class ListEventPredictionsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    ListEventPredictionsRequestPrivate(const FraudDetectorRequest::Action action,
                                   ListEventPredictionsRequest * const q);
    ListEventPredictionsRequestPrivate(const ListEventPredictionsRequestPrivate &other,
                                   ListEventPredictionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventPredictionsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
