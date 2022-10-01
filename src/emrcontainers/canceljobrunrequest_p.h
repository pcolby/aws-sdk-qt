// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRUNREQUEST_P_H
#define QTAWS_CANCELJOBRUNREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "canceljobrunrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CancelJobRunRequest;

class CancelJobRunRequestPrivate : public EmrcontainersRequestPrivate {

public:
    CancelJobRunRequestPrivate(const EmrcontainersRequest::Action action,
                                   CancelJobRunRequest * const q);
    CancelJobRunRequestPrivate(const CancelJobRunRequestPrivate &other,
                                   CancelJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelJobRunRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
