// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORSREQUEST_P_H
#define QTAWS_GETDETECTORSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getdetectorsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorsRequest;

class GetDetectorsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetDetectorsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetDetectorsRequest * const q);
    GetDetectorsRequestPrivate(const GetDetectorsRequestPrivate &other,
                                   GetDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDetectorsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
