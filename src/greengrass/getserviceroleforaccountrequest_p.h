// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEROLEFORACCOUNTREQUEST_P_H
#define QTAWS_GETSERVICEROLEFORACCOUNTREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getserviceroleforaccountrequest.h"

namespace QtAws {
namespace Greengrass {

class GetServiceRoleForAccountRequest;

class GetServiceRoleForAccountRequestPrivate : public GreengrassRequestPrivate {

public:
    GetServiceRoleForAccountRequestPrivate(const GreengrassRequest::Action action,
                                   GetServiceRoleForAccountRequest * const q);
    GetServiceRoleForAccountRequestPrivate(const GetServiceRoleForAccountRequestPrivate &other,
                                   GetServiceRoleForAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceRoleForAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
