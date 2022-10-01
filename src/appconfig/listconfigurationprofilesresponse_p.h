// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONPROFILESRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONPROFILESRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ListConfigurationProfilesResponse;

class ListConfigurationProfilesResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ListConfigurationProfilesResponsePrivate(ListConfigurationProfilesResponse * const q);

    void parseListConfigurationProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationProfilesResponse)
    Q_DISABLE_COPY(ListConfigurationProfilesResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
