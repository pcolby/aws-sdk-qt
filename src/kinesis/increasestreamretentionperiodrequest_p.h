// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASESTREAMRETENTIONPERIODREQUEST_P_H
#define QTAWS_INCREASESTREAMRETENTIONPERIODREQUEST_P_H

#include "kinesisrequest_p.h"
#include "increasestreamretentionperiodrequest.h"

namespace QtAws {
namespace Kinesis {

class IncreaseStreamRetentionPeriodRequest;

class IncreaseStreamRetentionPeriodRequestPrivate : public KinesisRequestPrivate {

public:
    IncreaseStreamRetentionPeriodRequestPrivate(const KinesisRequest::Action action,
                                   IncreaseStreamRetentionPeriodRequest * const q);
    IncreaseStreamRetentionPeriodRequestPrivate(const IncreaseStreamRetentionPeriodRequestPrivate &other,
                                   IncreaseStreamRetentionPeriodRequest * const q);

private:
    Q_DECLARE_PUBLIC(IncreaseStreamRetentionPeriodRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
