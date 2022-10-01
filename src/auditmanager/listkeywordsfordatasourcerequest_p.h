// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYWORDSFORDATASOURCEREQUEST_P_H
#define QTAWS_LISTKEYWORDSFORDATASOURCEREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listkeywordsfordatasourcerequest.h"

namespace QtAws {
namespace AuditManager {

class ListKeywordsForDataSourceRequest;

class ListKeywordsForDataSourceRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListKeywordsForDataSourceRequestPrivate(const AuditManagerRequest::Action action,
                                   ListKeywordsForDataSourceRequest * const q);
    ListKeywordsForDataSourceRequestPrivate(const ListKeywordsForDataSourceRequestPrivate &other,
                                   ListKeywordsForDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeywordsForDataSourceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
