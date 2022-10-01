// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEWORLDSREQUEST_P_H
#define QTAWS_BATCHDELETEWORLDSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "batchdeleteworldsrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDeleteWorldsRequest;

class BatchDeleteWorldsRequestPrivate : public RoboMakerRequestPrivate {

public:
    BatchDeleteWorldsRequestPrivate(const RoboMakerRequest::Action action,
                                   BatchDeleteWorldsRequest * const q);
    BatchDeleteWorldsRequestPrivate(const BatchDeleteWorldsRequestPrivate &other,
                                   BatchDeleteWorldsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteWorldsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
