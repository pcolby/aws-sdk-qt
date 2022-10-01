// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETENTIONSETTINGSRESPONSE_P_H
#define QTAWS_GETRETENTIONSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetRetentionSettingsResponse;

class GetRetentionSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetRetentionSettingsResponsePrivate(GetRetentionSettingsResponse * const q);

    void parseGetRetentionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRetentionSettingsResponse)
    Q_DISABLE_COPY(GetRetentionSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
