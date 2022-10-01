// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIMITSREQUEST_P_H
#define QTAWS_DESCRIBELIMITSREQUEST_P_H

#include "kinesisrequest_p.h"
#include "describelimitsrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeLimitsRequest;

class DescribeLimitsRequestPrivate : public KinesisRequestPrivate {

public:
    DescribeLimitsRequestPrivate(const KinesisRequest::Action action,
                                   DescribeLimitsRequest * const q);
    DescribeLimitsRequestPrivate(const DescribeLimitsRequestPrivate &other,
                                   DescribeLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLimitsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
