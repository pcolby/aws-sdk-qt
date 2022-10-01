// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTOREDQUERIESREQUEST_P_H
#define QTAWS_LISTSTOREDQUERIESREQUEST_P_H

#include "configservicerequest_p.h"
#include "liststoredqueriesrequest.h"

namespace QtAws {
namespace ConfigService {

class ListStoredQueriesRequest;

class ListStoredQueriesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    ListStoredQueriesRequestPrivate(const ConfigServiceRequest::Action action,
                                   ListStoredQueriesRequest * const q);
    ListStoredQueriesRequestPrivate(const ListStoredQueriesRequestPrivate &other,
                                   ListStoredQueriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStoredQueriesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
