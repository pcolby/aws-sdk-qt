// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBATCHJOBREQUEST_P_H
#define QTAWS_STARTBATCHJOBREQUEST_P_H

#include "m2request_p.h"
#include "startbatchjobrequest.h"

namespace QtAws {
namespace M2 {

class StartBatchJobRequest;

class StartBatchJobRequestPrivate : public M2RequestPrivate {

public:
    StartBatchJobRequestPrivate(const M2Request::Action action,
                                   StartBatchJobRequest * const q);
    StartBatchJobRequestPrivate(const StartBatchJobRequestPrivate &other,
                                   StartBatchJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBatchJobRequest)

};

} // namespace M2
} // namespace QtAws

#endif
