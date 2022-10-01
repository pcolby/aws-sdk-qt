// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceRetentionSettingsResponse;

class PutAppInstanceRetentionSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutAppInstanceRetentionSettingsResponsePrivate(PutAppInstanceRetentionSettingsResponse * const q);

    void parsePutAppInstanceRetentionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(PutAppInstanceRetentionSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
