// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONSETTINGSREQUEST_P_H
#define QTAWS_PUTRETENTIONSETTINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "putretentionsettingsrequest.h"

namespace QtAws {
namespace Chime {

class PutRetentionSettingsRequest;

class PutRetentionSettingsRequestPrivate : public ChimeRequestPrivate {

public:
    PutRetentionSettingsRequestPrivate(const ChimeRequest::Action action,
                                   PutRetentionSettingsRequest * const q);
    PutRetentionSettingsRequestPrivate(const PutRetentionSettingsRequestPrivate &other,
                                   PutRetentionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRetentionSettingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
