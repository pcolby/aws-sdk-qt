// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCEMAPPINGSREQUEST_P_H
#define QTAWS_LISTEVENTSOURCEMAPPINGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listeventsourcemappingsrequest.h"

namespace QtAws {
namespace Lambda {

class ListEventSourceMappingsRequest;

class ListEventSourceMappingsRequestPrivate : public LambdaRequestPrivate {

public:
    ListEventSourceMappingsRequestPrivate(const LambdaRequest::Action action,
                                   ListEventSourceMappingsRequest * const q);
    ListEventSourceMappingsRequestPrivate(const ListEventSourceMappingsRequestPrivate &other,
                                   ListEventSourceMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventSourceMappingsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
