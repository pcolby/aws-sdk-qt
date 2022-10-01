// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_P_H
#define QTAWS_DELETEENDPOINTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteEndpointRequest;

class DeleteEndpointRequestPrivate : public ComprehendRequestPrivate {

public:
    DeleteEndpointRequestPrivate(const ComprehendRequest::Action action,
                                   DeleteEndpointRequest * const q);
    DeleteEndpointRequestPrivate(const DeleteEndpointRequestPrivate &other,
                                   DeleteEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
