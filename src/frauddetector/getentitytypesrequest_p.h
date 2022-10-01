// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYTYPESREQUEST_P_H
#define QTAWS_GETENTITYTYPESREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getentitytypesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEntityTypesRequest;

class GetEntityTypesRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetEntityTypesRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetEntityTypesRequest * const q);
    GetEntityTypesRequestPrivate(const GetEntityTypesRequestPrivate &other,
                                   GetEntityTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEntityTypesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
