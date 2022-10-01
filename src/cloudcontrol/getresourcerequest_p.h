// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUEST_P_H
#define QTAWS_GETRESOURCEREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "getresourcerequest.h"

namespace QtAws {
namespace CloudControl {

class GetResourceRequest;

class GetResourceRequestPrivate : public CloudControlRequestPrivate {

public:
    GetResourceRequestPrivate(const CloudControlRequest::Action action,
                                   GetResourceRequest * const q);
    GetResourceRequestPrivate(const GetResourceRequestPrivate &other,
                                   GetResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
