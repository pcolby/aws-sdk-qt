// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceRetentionSettingsResponse;

class GetAppInstanceRetentionSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetAppInstanceRetentionSettingsResponsePrivate(GetAppInstanceRetentionSettingsResponse * const q);

    void parseGetAppInstanceRetentionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(GetAppInstanceRetentionSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
