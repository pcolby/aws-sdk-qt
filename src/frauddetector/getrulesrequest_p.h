// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULESREQUEST_P_H
#define QTAWS_GETRULESREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getrulesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetRulesRequest;

class GetRulesRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetRulesRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetRulesRequest * const q);
    GetRulesRequestPrivate(const GetRulesRequestPrivate &other,
                                   GetRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRulesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
