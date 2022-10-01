// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTCOMESREQUEST_P_H
#define QTAWS_GETOUTCOMESREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getoutcomesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetOutcomesRequest;

class GetOutcomesRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetOutcomesRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetOutcomesRequest * const q);
    GetOutcomesRequestPrivate(const GetOutcomesRequestPrivate &other,
                                   GetOutcomesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOutcomesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
