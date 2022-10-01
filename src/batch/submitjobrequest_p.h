// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITJOBREQUEST_P_H
#define QTAWS_SUBMITJOBREQUEST_P_H

#include "batchrequest_p.h"
#include "submitjobrequest.h"

namespace QtAws {
namespace Batch {

class SubmitJobRequest;

class SubmitJobRequestPrivate : public BatchRequestPrivate {

public:
    SubmitJobRequestPrivate(const BatchRequest::Action action,
                                   SubmitJobRequest * const q);
    SubmitJobRequestPrivate(const SubmitJobRequestPrivate &other,
                                   SubmitJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
