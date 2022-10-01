// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESREQUEST_P_H
#define QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmobiledeviceaccessoverridesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessOverridesRequest;

class ListMobileDeviceAccessOverridesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMobileDeviceAccessOverridesRequestPrivate(const WorkMailRequest::Action action,
                                   ListMobileDeviceAccessOverridesRequest * const q);
    ListMobileDeviceAccessOverridesRequestPrivate(const ListMobileDeviceAccessOverridesRequestPrivate &other,
                                   ListMobileDeviceAccessOverridesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMobileDeviceAccessOverridesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
