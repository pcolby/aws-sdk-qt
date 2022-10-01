// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ListHostedConfigurationVersionsResponse;

class ListHostedConfigurationVersionsResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ListHostedConfigurationVersionsResponsePrivate(ListHostedConfigurationVersionsResponse * const q);

    void parseListHostedConfigurationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostedConfigurationVersionsResponse)
    Q_DISABLE_COPY(ListHostedConfigurationVersionsResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
