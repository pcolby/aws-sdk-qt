// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHARDCOUNTREQUEST_P_H
#define QTAWS_UPDATESHARDCOUNTREQUEST_P_H

#include "kinesisrequest_p.h"
#include "updateshardcountrequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateShardCountRequest;

class UpdateShardCountRequestPrivate : public KinesisRequestPrivate {

public:
    UpdateShardCountRequestPrivate(const KinesisRequest::Action action,
                                   UpdateShardCountRequest * const q);
    UpdateShardCountRequestPrivate(const UpdateShardCountRequestPrivate &other,
                                   UpdateShardCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateShardCountRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
