// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSOURCEMAPPINGREQUEST_P_H
#define QTAWS_GETEVENTSOURCEMAPPINGREQUEST_P_H

#include "lambdarequest_p.h"
#include "geteventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class GetEventSourceMappingRequest;

class GetEventSourceMappingRequestPrivate : public LambdaRequestPrivate {

public:
    GetEventSourceMappingRequestPrivate(const LambdaRequest::Action action,
                                   GetEventSourceMappingRequest * const q);
    GetEventSourceMappingRequestPrivate(const GetEventSourceMappingRequestPrivate &other,
                                   GetEventSourceMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
