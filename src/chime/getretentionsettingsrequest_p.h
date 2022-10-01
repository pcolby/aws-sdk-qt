// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETENTIONSETTINGSREQUEST_P_H
#define QTAWS_GETRETENTIONSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "getretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetRetentionSettingsRequest;

class GetRetentionSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    GetRetentionSettingsRequestPrivate(const ChimeRequest::Action action,
                                   GetRetentionSettingsRequest * const q);
    GetRetentionSettingsRequestPrivate(const GetRetentionSettingsRequestPrivate &other,
                                   GetRetentionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
