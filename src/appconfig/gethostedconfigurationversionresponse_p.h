// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H
#define QTAWS_GETHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetHostedConfigurationVersionResponse;

class GetHostedConfigurationVersionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetHostedConfigurationVersionResponsePrivate(GetHostedConfigurationVersionResponse * const q);

    void parseGetHostedConfigurationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(GetHostedConfigurationVersionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
