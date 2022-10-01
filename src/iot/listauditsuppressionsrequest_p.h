// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITSUPPRESSIONSREQUEST_P_H
#define QTAWS_LISTAUDITSUPPRESSIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listauditsuppressionsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditSuppressionsRequest;

class ListAuditSuppressionsRequestPrivate : public IoTRequestPrivate {

public:
    ListAuditSuppressionsRequestPrivate(const IoTRequest::Action action,
                                   ListAuditSuppressionsRequest * const q);
    ListAuditSuppressionsRequestPrivate(const ListAuditSuppressionsRequestPrivate &other,
                                   ListAuditSuppressionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuditSuppressionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
