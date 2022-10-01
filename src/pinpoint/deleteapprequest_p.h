// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREQUEST_P_H
#define QTAWS_DELETEAPPREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteapprequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAppRequest;

class DeleteAppRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteAppRequestPrivate(const PinpointRequest::Action action,
                                   DeleteAppRequest * const q);
    DeleteAppRequestPrivate(const DeleteAppRequestPrivate &other,
                                   DeleteAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
