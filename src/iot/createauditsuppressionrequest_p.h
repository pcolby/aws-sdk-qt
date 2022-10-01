// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUDITSUPPRESSIONREQUEST_P_H
#define QTAWS_CREATEAUDITSUPPRESSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuditSuppressionRequest;

class CreateAuditSuppressionRequestPrivate : public IoTRequestPrivate {

public:
    CreateAuditSuppressionRequestPrivate(const IoTRequest::Action action,
                                   CreateAuditSuppressionRequest * const q);
    CreateAuditSuppressionRequestPrivate(const CreateAuditSuppressionRequestPrivate &other,
                                   CreateAuditSuppressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
