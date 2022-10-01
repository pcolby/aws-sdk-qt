// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSHARDITERATORREQUEST_P_H
#define QTAWS_GETSHARDITERATORREQUEST_P_H

#include "kinesisrequest_p.h"
#include "getsharditeratorrequest.h"

namespace QtAws {
namespace Kinesis {

class GetShardIteratorRequest;

class GetShardIteratorRequestPrivate : public KinesisRequestPrivate {

public:
    GetShardIteratorRequestPrivate(const KinesisRequest::Action action,
                                   GetShardIteratorRequest * const q);
    GetShardIteratorRequestPrivate(const GetShardIteratorRequestPrivate &other,
                                   GetShardIteratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetShardIteratorRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
