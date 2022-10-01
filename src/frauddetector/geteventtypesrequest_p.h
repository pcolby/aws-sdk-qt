// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTTYPESREQUEST_P_H
#define QTAWS_GETEVENTTYPESREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "geteventtypesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventTypesRequest;

class GetEventTypesRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetEventTypesRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetEventTypesRequest * const q);
    GetEventTypesRequestPrivate(const GetEventTypesRequestPrivate &other,
                                   GetEventTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventTypesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
