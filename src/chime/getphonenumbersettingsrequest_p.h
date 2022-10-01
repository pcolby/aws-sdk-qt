// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERSETTINGSREQUEST_P_H
#define QTAWS_GETPHONENUMBERSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "getphonenumbersettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberSettingsRequest;

class GetPhoneNumberSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    GetPhoneNumberSettingsRequestPrivate(const ChimeRequest::Action action,
                                   GetPhoneNumberSettingsRequest * const q);
    GetPhoneNumberSettingsRequestPrivate(const GetPhoneNumberSettingsRequestPrivate &other,
                                   GetPhoneNumberSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
