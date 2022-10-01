// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONPROFILERESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONPROFILERESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteConfigurationProfileResponse;

class DeleteConfigurationProfileResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteConfigurationProfileResponsePrivate(DeleteConfigurationProfileResponse * const q);

    void parseDeleteConfigurationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationProfileResponse)
    Q_DISABLE_COPY(DeleteConfigurationProfileResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
