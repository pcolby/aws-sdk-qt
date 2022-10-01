// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateEnvironmentResponse;

class UpdateEnvironmentResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateEnvironmentResponsePrivate(UpdateEnvironmentResponse * const q);

    void parseUpdateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentResponse)
    Q_DISABLE_COPY(UpdateEnvironmentResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
