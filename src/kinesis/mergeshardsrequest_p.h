// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGESHARDSREQUEST_P_H
#define QTAWS_MERGESHARDSREQUEST_P_H

#include "kinesisrequest_p.h"
#include "mergeshardsrequest.h"

namespace QtAws {
namespace Kinesis {

class MergeShardsRequest;

class MergeShardsRequestPrivate : public KinesisRequestPrivate {

public:
    MergeShardsRequestPrivate(const KinesisRequest::Action action,
                                   MergeShardsRequest * const q);
    MergeShardsRequestPrivate(const MergeShardsRequestPrivate &other,
                                   MergeShardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeShardsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
