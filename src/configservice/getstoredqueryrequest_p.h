// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTOREDQUERYREQUEST_P_H
#define QTAWS_GETSTOREDQUERYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getstoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetStoredQueryRequest;

class GetStoredQueryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetStoredQueryRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetStoredQueryRequest * const q);
    GetStoredQueryRequestPrivate(const GetStoredQueryRequestPrivate &other,
                                   GetStoredQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
