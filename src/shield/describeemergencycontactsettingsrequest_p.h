// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeemergencycontactsettingsrequest.h"

namespace QtAws {
namespace Shield {

class DescribeEmergencyContactSettingsRequest;

class DescribeEmergencyContactSettingsRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeEmergencyContactSettingsRequestPrivate(const ShieldRequest::Action action,
                                   DescribeEmergencyContactSettingsRequest * const q);
    DescribeEmergencyContactSettingsRequestPrivate(const DescribeEmergencyContactSettingsRequestPrivate &other,
                                   DescribeEmergencyContactSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEmergencyContactSettingsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
