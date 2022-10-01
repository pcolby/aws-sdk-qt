// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMLJOBREQUEST_P_H
#define QTAWS_STOPAUTOMLJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopAutoMLJobRequest;

class StopAutoMLJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopAutoMLJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopAutoMLJobRequest * const q);
    StopAutoMLJobRequestPrivate(const StopAutoMLJobRequestPrivate &other,
                                   StopAutoMLJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
