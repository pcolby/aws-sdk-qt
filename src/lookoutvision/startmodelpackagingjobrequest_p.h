// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELPACKAGINGJOBREQUEST_P_H
#define QTAWS_STARTMODELPACKAGINGJOBREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "startmodelpackagingjobrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelPackagingJobRequest;

class StartModelPackagingJobRequestPrivate : public LookoutVisionRequestPrivate {

public:
    StartModelPackagingJobRequestPrivate(const LookoutVisionRequest::Action action,
                                   StartModelPackagingJobRequest * const q);
    StartModelPackagingJobRequestPrivate(const StartModelPackagingJobRequestPrivate &other,
                                   StartModelPackagingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartModelPackagingJobRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
