// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUDITSUPPRESSIONREQUEST_P_H
#define QTAWS_DELETEAUDITSUPPRESSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAuditSuppressionRequest;

class DeleteAuditSuppressionRequestPrivate : public IoTRequestPrivate {

public:
    DeleteAuditSuppressionRequestPrivate(const IoTRequest::Action action,
                                   DeleteAuditSuppressionRequest * const q);
    DeleteAuditSuppressionRequestPrivate(const DeleteAuditSuppressionRequestPrivate &other,
                                   DeleteAuditSuppressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
