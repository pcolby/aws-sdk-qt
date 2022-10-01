// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYINFOREQUEST_P_H
#define QTAWS_UPDATECONNECTIVITYINFOREQUEST_P_H

#include "greengrassv2request_p.h"
#include "updateconnectivityinforequest.h"

namespace QtAws {
namespace GreengrassV2 {

class UpdateConnectivityInfoRequest;

class UpdateConnectivityInfoRequestPrivate : public GreengrassV2RequestPrivate {

public:
    UpdateConnectivityInfoRequestPrivate(const GreengrassV2Request::Action action,
                                   UpdateConnectivityInfoRequest * const q);
    UpdateConnectivityInfoRequestPrivate(const UpdateConnectivityInfoRequestPrivate &other,
                                   UpdateConnectivityInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectivityInfoRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
