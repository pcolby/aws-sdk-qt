// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteEnvironmentResponse;

class DeleteEnvironmentResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteEnvironmentResponsePrivate(DeleteEnvironmentResponse * const q);

    void parseDeleteEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentResponse)
    Q_DISABLE_COPY(DeleteEnvironmentResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
