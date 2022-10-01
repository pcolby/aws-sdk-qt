// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONPROFILERESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONPROFILERESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateConfigurationProfileResponse;

class UpdateConfigurationProfileResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateConfigurationProfileResponsePrivate(UpdateConfigurationProfileResponse * const q);

    void parseUpdateConfigurationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationProfileResponse)
    Q_DISABLE_COPY(UpdateConfigurationProfileResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
