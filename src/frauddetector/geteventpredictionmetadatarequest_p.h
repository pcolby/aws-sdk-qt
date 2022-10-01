// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONMETADATAREQUEST_P_H
#define QTAWS_GETEVENTPREDICTIONMETADATAREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "geteventpredictionmetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionMetadataRequest;

class GetEventPredictionMetadataRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetEventPredictionMetadataRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetEventPredictionMetadataRequest * const q);
    GetEventPredictionMetadataRequestPrivate(const GetEventPredictionMetadataRequestPrivate &other,
                                   GetEventPredictionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventPredictionMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
