// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGLOBALSETTINGSREQUEST_P_H
#define QTAWS_GETGLOBALSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "getglobalsettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetGlobalSettingsRequest;

class GetGlobalSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    GetGlobalSettingsRequestPrivate(const ChimeRequest::Action action,
                                   GetGlobalSettingsRequest * const q);
    GetGlobalSettingsRequestPrivate(const GetGlobalSettingsRequestPrivate &other,
                                   GetGlobalSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGlobalSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
