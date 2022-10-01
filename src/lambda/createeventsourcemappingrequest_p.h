// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_P_H
#define QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_P_H

#include "lambdarequest_p.h"
#include "createeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class CreateEventSourceMappingRequest;

class CreateEventSourceMappingRequestPrivate : public LambdaRequestPrivate {

public:
    CreateEventSourceMappingRequestPrivate(const LambdaRequest::Action action,
                                   CreateEventSourceMappingRequest * const q);
    CreateEventSourceMappingRequestPrivate(const CreateEventSourceMappingRequestPrivate &other,
                                   CreateEventSourceMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
