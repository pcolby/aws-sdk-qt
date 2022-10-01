// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSREQUEST_P_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listauditmitigationactionsexecutionsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsExecutionsRequest;

class ListAuditMitigationActionsExecutionsRequestPrivate : public IoTRequestPrivate {

public:
    ListAuditMitigationActionsExecutionsRequestPrivate(const IoTRequest::Action action,
                                   ListAuditMitigationActionsExecutionsRequest * const q);
    ListAuditMitigationActionsExecutionsRequestPrivate(const ListAuditMitigationActionsExecutionsRequestPrivate &other,
                                   ListAuditMitigationActionsExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuditMitigationActionsExecutionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
