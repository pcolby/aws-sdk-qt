// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "m2request_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace M2 {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public M2RequestPrivate {

public:
    GetApplicationRequestPrivate(const M2Request::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace M2
} // namespace QtAws

#endif
