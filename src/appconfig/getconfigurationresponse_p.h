// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationResponse;

class GetConfigurationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetConfigurationResponsePrivate(GetConfigurationResponse * const q);

    void parseGetConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationResponse)
    Q_DISABLE_COPY(GetConfigurationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
