// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSRULESREQUEST_P_H
#define QTAWS_LISTMOBILEDEVICEACCESSRULESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmobiledeviceaccessrulesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessRulesRequest;

class ListMobileDeviceAccessRulesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMobileDeviceAccessRulesRequestPrivate(const WorkMailRequest::Action action,
                                   ListMobileDeviceAccessRulesRequest * const q);
    ListMobileDeviceAccessRulesRequestPrivate(const ListMobileDeviceAccessRulesRequestPrivate &other,
                                   ListMobileDeviceAccessRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMobileDeviceAccessRulesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
