// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELDAPSSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBELDAPSSETTINGSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describeldapssettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeLDAPSSettingsRequest;

class DescribeLDAPSSettingsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeLDAPSSettingsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeLDAPSSettingsRequest * const q);
    DescribeLDAPSSettingsRequestPrivate(const DescribeLDAPSSettingsRequestPrivate &other,
                                   DescribeLDAPSSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLDAPSSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
