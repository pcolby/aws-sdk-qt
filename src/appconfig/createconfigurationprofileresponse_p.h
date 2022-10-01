// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONPROFILERESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONPROFILERESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class CreateConfigurationProfileResponse;

class CreateConfigurationProfileResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit CreateConfigurationProfileResponsePrivate(CreateConfigurationProfileResponse * const q);

    void parseCreateConfigurationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationProfileResponse)
    Q_DISABLE_COPY(CreateConfigurationProfileResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
