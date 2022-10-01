// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEPLATFORMAPPLICATIONREQUEST_P_H

#include "snsrequest_p.h"
#include "deleteplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class DeletePlatformApplicationRequest;

class DeletePlatformApplicationRequestPrivate : public SnsRequestPrivate {

public:
    DeletePlatformApplicationRequestPrivate(const SnsRequest::Action action,
                                   DeletePlatformApplicationRequest * const q);
    DeletePlatformApplicationRequestPrivate(const DeletePlatformApplicationRequestPrivate &other,
                                   DeletePlatformApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
