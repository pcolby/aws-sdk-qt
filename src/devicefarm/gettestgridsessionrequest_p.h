// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDSESSIONREQUEST_P_H
#define QTAWS_GETTESTGRIDSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "gettestgridsessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridSessionRequest;

class GetTestGridSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetTestGridSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetTestGridSessionRequest * const q);
    GetTestGridSessionRequestPrivate(const GetTestGridSessionRequestPrivate &other,
                                   GetTestGridSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTestGridSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
