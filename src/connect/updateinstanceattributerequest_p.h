// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEATTRIBUTEREQUEST_P_H
#define QTAWS_UPDATEINSTANCEATTRIBUTEREQUEST_P_H

#include "connectrequest_p.h"
#include "updateinstanceattributerequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceAttributeRequest;

class UpdateInstanceAttributeRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateInstanceAttributeRequestPrivate(const ConnectRequest::Action action,
                                   UpdateInstanceAttributeRequest * const q);
    UpdateInstanceAttributeRequestPrivate(const UpdateInstanceAttributeRequestPrivate &other,
                                   UpdateInstanceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceAttributeRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
