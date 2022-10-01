// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H
#define QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteHostedConfigurationVersionResponse;

class DeleteHostedConfigurationVersionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteHostedConfigurationVersionResponsePrivate(DeleteHostedConfigurationVersionResponse * const q);

    void parseDeleteHostedConfigurationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(DeleteHostedConfigurationVersionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
