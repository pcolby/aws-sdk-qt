// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_P_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "putappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceRetentionSettingsRequest;

class PutAppInstanceRetentionSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    PutAppInstanceRetentionSettingsRequestPrivate(const ChimeRequest::Action action,
                                   PutAppInstanceRetentionSettingsRequest * const q);
    PutAppInstanceRetentionSettingsRequestPrivate(const PutAppInstanceRetentionSettingsRequestPrivate &other,
                                   PutAppInstanceRetentionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppInstanceRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
