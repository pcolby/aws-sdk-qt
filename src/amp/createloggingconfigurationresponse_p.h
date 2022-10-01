// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATELOGGINGCONFIGURATIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class CreateLoggingConfigurationResponse;

class CreateLoggingConfigurationResponsePrivate : public AmpResponsePrivate {

public:

    explicit CreateLoggingConfigurationResponsePrivate(CreateLoggingConfigurationResponse * const q);

    void parseCreateLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoggingConfigurationResponse)
    Q_DISABLE_COPY(CreateLoggingConfigurationResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
