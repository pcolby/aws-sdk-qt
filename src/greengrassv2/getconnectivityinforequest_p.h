// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFOREQUEST_P_H
#define QTAWS_GETCONNECTIVITYINFOREQUEST_P_H

#include "greengrassv2request_p.h"
#include "getconnectivityinforequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetConnectivityInfoRequest;

class GetConnectivityInfoRequestPrivate : public GreengrassV2RequestPrivate {

public:
    GetConnectivityInfoRequestPrivate(const GreengrassV2Request::Action action,
                                   GetConnectivityInfoRequest * const q);
    GetConnectivityInfoRequestPrivate(const GetConnectivityInfoRequestPrivate &other,
                                   GetConnectivityInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectivityInfoRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
