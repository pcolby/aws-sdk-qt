// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateApplicationResponse;

class UpdateApplicationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateApplicationResponsePrivate(UpdateApplicationResponse * const q);

    void parseUpdateApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationResponse)
    Q_DISABLE_COPY(UpdateApplicationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
