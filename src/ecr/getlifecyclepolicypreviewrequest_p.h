// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYPREVIEWREQUEST_P_H
#define QTAWS_GETLIFECYCLEPOLICYPREVIEWREQUEST_P_H

#include "ecrrequest_p.h"
#include "getlifecyclepolicypreviewrequest.h"

namespace QtAws {
namespace Ecr {

class GetLifecyclePolicyPreviewRequest;

class GetLifecyclePolicyPreviewRequestPrivate : public EcrRequestPrivate {

public:
    GetLifecyclePolicyPreviewRequestPrivate(const EcrRequest::Action action,
                                   GetLifecyclePolicyPreviewRequest * const q);
    GetLifecyclePolicyPreviewRequestPrivate(const GetLifecyclePolicyPreviewRequestPrivate &other,
                                   GetLifecyclePolicyPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePolicyPreviewRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
