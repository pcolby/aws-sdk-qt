// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEREQUEST_P_H
#define QTAWS_GETSUITEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getsuiterequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetSuiteRequest;

class GetSuiteRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetSuiteRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetSuiteRequest * const q);
    GetSuiteRequestPrivate(const GetSuiteRequestPrivate &other,
                                   GetSuiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSuiteRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
