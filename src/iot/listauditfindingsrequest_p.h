// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITFINDINGSREQUEST_P_H
#define QTAWS_LISTAUDITFINDINGSREQUEST_P_H

#include "iotrequest_p.h"
#include "listauditfindingsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditFindingsRequest;

class ListAuditFindingsRequestPrivate : public IoTRequestPrivate {

public:
    ListAuditFindingsRequestPrivate(const IoTRequest::Action action,
                                   ListAuditFindingsRequest * const q);
    ListAuditFindingsRequestPrivate(const ListAuditFindingsRequestPrivate &other,
                                   ListAuditFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuditFindingsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
