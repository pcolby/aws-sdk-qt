// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYASSISTANTREQUEST_P_H
#define QTAWS_QUERYASSISTANTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "queryassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class QueryAssistantRequest;

class QueryAssistantRequestPrivate : public WisdomRequestPrivate {

public:
    QueryAssistantRequestPrivate(const WisdomRequest::Action action,
                                   QueryAssistantRequest * const q);
    QueryAssistantRequestPrivate(const QueryAssistantRequestPrivate &other,
                                   QueryAssistantRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
