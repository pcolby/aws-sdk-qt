// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSREQUEST_P_H
#define QTAWS_UPDATEGLOBALSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "updateglobalsettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdateGlobalSettingsRequest;

class UpdateGlobalSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateGlobalSettingsRequestPrivate(const ChimeRequest::Action action,
                                   UpdateGlobalSettingsRequest * const q);
    UpdateGlobalSettingsRequestPrivate(const UpdateGlobalSettingsRequestPrivate &other,
                                   UpdateGlobalSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
