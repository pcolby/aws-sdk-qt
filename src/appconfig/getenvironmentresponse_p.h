// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTRESPONSE_P_H
#define QTAWS_GETENVIRONMENTRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetEnvironmentResponse;

class GetEnvironmentResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetEnvironmentResponsePrivate(GetEnvironmentResponse * const q);

    void parseGetEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentResponse)
    Q_DISABLE_COPY(GetEnvironmentResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
