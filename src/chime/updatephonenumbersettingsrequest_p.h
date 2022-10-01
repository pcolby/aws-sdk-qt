// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERSETTINGSREQUEST_P_H
#define QTAWS_UPDATEPHONENUMBERSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "updatephonenumbersettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdatePhoneNumberSettingsRequest;

class UpdatePhoneNumberSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    UpdatePhoneNumberSettingsRequestPrivate(const ChimeRequest::Action action,
                                   UpdatePhoneNumberSettingsRequest * const q);
    UpdatePhoneNumberSettingsRequestPrivate(const UpdatePhoneNumberSettingsRequestPrivate &other,
                                   UpdatePhoneNumberSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
