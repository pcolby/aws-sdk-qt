// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLIFECYCLEPOLICYPREVIEWREQUEST_P_H
#define QTAWS_STARTLIFECYCLEPOLICYPREVIEWREQUEST_P_H

#include "ecrrequest_p.h"
#include "startlifecyclepolicypreviewrequest.h"

namespace QtAws {
namespace Ecr {

class StartLifecyclePolicyPreviewRequest;

class StartLifecyclePolicyPreviewRequestPrivate : public EcrRequestPrivate {

public:
    StartLifecyclePolicyPreviewRequestPrivate(const EcrRequest::Action action,
                                   StartLifecyclePolicyPreviewRequest * const q);
    StartLifecyclePolicyPreviewRequestPrivate(const StartLifecyclePolicyPreviewRequestPrivate &other,
                                   StartLifecyclePolicyPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartLifecyclePolicyPreviewRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
