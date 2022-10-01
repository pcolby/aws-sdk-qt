// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONSETTINGSRESPONSE_P_H
#define QTAWS_PUTRETENTIONSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutRetentionSettingsResponse;

class PutRetentionSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutRetentionSettingsResponsePrivate(PutRetentionSettingsResponse * const q);

    void parsePutRetentionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRetentionSettingsResponse)
    Q_DISABLE_COPY(PutRetentionSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
