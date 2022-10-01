// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSETTINGSREQUEST_P_H
#define QTAWS_UPDATEACCOUNTSETTINGSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateaccountsettingsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountSettingsRequest;

class UpdateAccountSettingsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateAccountSettingsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateAccountSettingsRequest * const q);
    UpdateAccountSettingsRequestPrivate(const UpdateAccountSettingsRequestPrivate &other,
                                   UpdateAccountSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountSettingsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
