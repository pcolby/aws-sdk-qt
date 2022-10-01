// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTREQUEST_P_H
#define QTAWS_GETTESTREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "gettestrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestRequest;

class GetTestRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetTestRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetTestRequest * const q);
    GetTestRequestPrivate(const GetTestRequestPrivate &other,
                                   GetTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTestRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
