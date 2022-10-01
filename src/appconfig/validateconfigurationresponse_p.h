// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONRESPONSE_P_H
#define QTAWS_VALIDATECONFIGURATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ValidateConfigurationResponse;

class ValidateConfigurationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ValidateConfigurationResponsePrivate(ValidateConfigurationResponse * const q);

    void parseValidateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateConfigurationResponse)
    Q_DISABLE_COPY(ValidateConfigurationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
