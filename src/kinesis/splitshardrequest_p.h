// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SPLITSHARDREQUEST_P_H
#define QTAWS_SPLITSHARDREQUEST_P_H

#include "kinesisrequest_p.h"
#include "splitshardrequest.h"

namespace QtAws {
namespace Kinesis {

class SplitShardRequest;

class SplitShardRequestPrivate : public KinesisRequestPrivate {

public:
    SplitShardRequestPrivate(const KinesisRequest::Action action,
                                   SplitShardRequest * const q);
    SplitShardRequestPrivate(const SplitShardRequestPrivate &other,
                                   SplitShardRequest * const q);

private:
    Q_DECLARE_PUBLIC(SplitShardRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
