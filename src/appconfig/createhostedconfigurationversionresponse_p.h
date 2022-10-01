// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class CreateHostedConfigurationVersionResponse;

class CreateHostedConfigurationVersionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit CreateHostedConfigurationVersionResponsePrivate(CreateHostedConfigurationVersionResponse * const q);

    void parseCreateHostedConfigurationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(CreateHostedConfigurationVersionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
