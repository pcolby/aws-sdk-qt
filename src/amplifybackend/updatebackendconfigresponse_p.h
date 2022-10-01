// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDCONFIGRESPONSE_P_H
#define QTAWS_UPDATEBACKENDCONFIGRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendConfigResponse;

class UpdateBackendConfigResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit UpdateBackendConfigResponsePrivate(UpdateBackendConfigResponse * const q);

    void parseUpdateBackendConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackendConfigResponse)
    Q_DISABLE_COPY(UpdateBackendConfigResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
