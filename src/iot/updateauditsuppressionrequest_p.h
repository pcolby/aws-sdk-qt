// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSUPPRESSIONREQUEST_P_H
#define QTAWS_UPDATEAUDITSUPPRESSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updateauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAuditSuppressionRequest;

class UpdateAuditSuppressionRequestPrivate : public IoTRequestPrivate {

public:
    UpdateAuditSuppressionRequestPrivate(const IoTRequest::Action action,
                                   UpdateAuditSuppressionRequest * const q);
    UpdateAuditSuppressionRequestPrivate(const UpdateAuditSuppressionRequestPrivate &other,
                                   UpdateAuditSuppressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
