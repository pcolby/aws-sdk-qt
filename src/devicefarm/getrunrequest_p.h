// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRUNREQUEST_P_H
#define QTAWS_GETRUNREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getrunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRunRequest;

class GetRunRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetRunRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetRunRequest * const q);
    GetRunRequestPrivate(const GetRunRequestPrivate &other,
                                   GetRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
