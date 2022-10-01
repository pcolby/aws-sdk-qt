// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASESTREAMRETENTIONPERIODREQUEST_P_H
#define QTAWS_DECREASESTREAMRETENTIONPERIODREQUEST_P_H

#include "kinesisrequest_p.h"
#include "decreasestreamretentionperiodrequest.h"

namespace QtAws {
namespace Kinesis {

class DecreaseStreamRetentionPeriodRequest;

class DecreaseStreamRetentionPeriodRequestPrivate : public KinesisRequestPrivate {

public:
    DecreaseStreamRetentionPeriodRequestPrivate(const KinesisRequest::Action action,
                                   DecreaseStreamRetentionPeriodRequest * const q);
    DecreaseStreamRetentionPeriodRequestPrivate(const DecreaseStreamRetentionPeriodRequestPrivate &other,
                                   DecreaseStreamRetentionPeriodRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecreaseStreamRetentionPeriodRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
