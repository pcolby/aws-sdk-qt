// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTOREDQUERYREQUEST_P_H
#define QTAWS_PUTSTOREDQUERYREQUEST_P_H

#include "configservicerequest_p.h"
#include "putstoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class PutStoredQueryRequest;

class PutStoredQueryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutStoredQueryRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutStoredQueryRequest * const q);
    PutStoredQueryRequestPrivate(const PutStoredQueryRequestPrivate &other,
                                   PutStoredQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
