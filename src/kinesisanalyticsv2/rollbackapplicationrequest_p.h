// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKAPPLICATIONREQUEST_P_H
#define QTAWS_ROLLBACKAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "rollbackapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class RollbackApplicationRequest;

class RollbackApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    RollbackApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   RollbackApplicationRequest * const q);
    RollbackApplicationRequestPrivate(const RollbackApplicationRequestPrivate &other,
                                   RollbackApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RollbackApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
