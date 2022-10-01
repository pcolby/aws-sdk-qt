// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICSHARINGSETTINGSREQUEST_P_H
#define QTAWS_UPDATEPUBLICSHARINGSETTINGSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatepublicsharingsettingsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdatePublicSharingSettingsRequest;

class UpdatePublicSharingSettingsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdatePublicSharingSettingsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdatePublicSharingSettingsRequest * const q);
    UpdatePublicSharingSettingsRequestPrivate(const UpdatePublicSharingSettingsRequestPrivate &other,
                                   UpdatePublicSharingSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePublicSharingSettingsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
