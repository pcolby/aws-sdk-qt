// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCEMAPPINGREQUEST_P_H
#define QTAWS_UPDATEEVENTSOURCEMAPPINGREQUEST_P_H

#include "lambdarequest_p.h"
#include "updateeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateEventSourceMappingRequest;

class UpdateEventSourceMappingRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateEventSourceMappingRequestPrivate(const LambdaRequest::Action action,
                                   UpdateEventSourceMappingRequest * const q);
    UpdateEventSourceMappingRequestPrivate(const UpdateEventSourceMappingRequestPrivate &other,
                                   UpdateEventSourceMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
