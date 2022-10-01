// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONPROFILERESPONSE_P_H
#define QTAWS_GETCONFIGURATIONPROFILERESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationProfileResponse;

class GetConfigurationProfileResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetConfigurationProfileResponsePrivate(GetConfigurationProfileResponse * const q);

    void parseGetConfigurationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationProfileResponse)
    Q_DISABLE_COPY(GetConfigurationProfileResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
