// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLATESTCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETLATESTCONFIGURATIONRESPONSE_P_H

#include "appconfigdataresponse_p.h"

namespace QtAws {
namespace AppConfigData {

class GetLatestConfigurationResponse;

class GetLatestConfigurationResponsePrivate : public AppConfigDataResponsePrivate {

public:

    explicit GetLatestConfigurationResponsePrivate(GetLatestConfigurationResponse * const q);

    void parseGetLatestConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLatestConfigurationResponse)
    Q_DISABLE_COPY(GetLatestConfigurationResponsePrivate)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
