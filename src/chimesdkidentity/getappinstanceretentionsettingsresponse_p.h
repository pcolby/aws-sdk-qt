// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class GetAppInstanceRetentionSettingsResponse;

class GetAppInstanceRetentionSettingsResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit GetAppInstanceRetentionSettingsResponsePrivate(GetAppInstanceRetentionSettingsResponse * const q);

    void parseGetAppInstanceRetentionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(GetAppInstanceRetentionSettingsResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
