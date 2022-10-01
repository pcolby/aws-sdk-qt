// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUESTSTATUSREQUEST_P_H
#define QTAWS_GETRESOURCEREQUESTSTATUSREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "getresourcerequeststatusrequest.h"

namespace QtAws {
namespace CloudControl {

class GetResourceRequestStatusRequest;

class GetResourceRequestStatusRequestPrivate : public CloudControlRequestPrivate {

public:
    GetResourceRequestStatusRequestPrivate(const CloudControlRequest::Action action,
                                   GetResourceRequestStatusRequest * const q);
    GetResourceRequestStatusRequestPrivate(const GetResourceRequestStatusRequestPrivate &other,
                                   GetResourceRequestStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceRequestStatusRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
