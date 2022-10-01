// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPREQUEST_P_H
#define QTAWS_DELETEGROUPREQUEST_P_H

#include "xrayrequest_p.h"
#include "deletegrouprequest.h"

namespace QtAws {
namespace XRay {

class DeleteGroupRequest;

class DeleteGroupRequestPrivate : public XRayRequestPrivate {

public:
    DeleteGroupRequestPrivate(const XRayRequest::Action action,
                                   DeleteGroupRequest * const q);
    DeleteGroupRequestPrivate(const DeleteGroupRequestPrivate &other,
                                   DeleteGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
