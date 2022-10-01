// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTREQUEST_P_H
#define QTAWS_GETCOMPONENTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "getcomponentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentRequest;

class GetComponentRequestPrivate : public GreengrassV2RequestPrivate {

public:
    GetComponentRequestPrivate(const GreengrassV2Request::Action action,
                                   GetComponentRequest * const q);
    GetComponentRequestPrivate(const GetComponentRequestPrivate &other,
                                   GetComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
