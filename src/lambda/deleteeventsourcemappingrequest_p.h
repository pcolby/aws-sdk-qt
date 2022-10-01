// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSOURCEMAPPINGREQUEST_P_H
#define QTAWS_DELETEEVENTSOURCEMAPPINGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deleteeventsourcemappingrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteEventSourceMappingRequest;

class DeleteEventSourceMappingRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteEventSourceMappingRequestPrivate(const LambdaRequest::Action action,
                                   DeleteEventSourceMappingRequest * const q);
    DeleteEventSourceMappingRequestPrivate(const DeleteEventSourceMappingRequestPrivate &other,
                                   DeleteEventSourceMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
