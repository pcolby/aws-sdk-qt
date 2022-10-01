// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONRESPONSE_P_H
#define QTAWS_GETAPPLICATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetApplicationResponse;

class GetApplicationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetApplicationResponsePrivate(GetApplicationResponse * const q);

    void parseGetApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationResponse)
    Q_DISABLE_COPY(GetApplicationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
