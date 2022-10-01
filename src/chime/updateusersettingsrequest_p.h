// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSREQUEST_P_H
#define QTAWS_UPDATEUSERSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "updateusersettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdateUserSettingsRequest;

class UpdateUserSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateUserSettingsRequestPrivate(const ChimeRequest::Action action,
                                   UpdateUserSettingsRequest * const q);
    UpdateUserSettingsRequestPrivate(const UpdateUserSettingsRequestPrivate &other,
                                   UpdateUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
