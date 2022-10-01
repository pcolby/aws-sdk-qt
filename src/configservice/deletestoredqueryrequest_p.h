// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTOREDQUERYREQUEST_P_H
#define QTAWS_DELETESTOREDQUERYREQUEST_P_H

#include "configservicerequest_p.h"
#include "deletestoredqueryrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteStoredQueryRequest;

class DeleteStoredQueryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteStoredQueryRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteStoredQueryRequest * const q);
    DeleteStoredQueryRequestPrivate(const DeleteStoredQueryRequestPrivate &other,
                                   DeleteStoredQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
