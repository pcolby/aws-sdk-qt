// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDCONFIGRESPONSE_P_H
#define QTAWS_CREATEBACKENDCONFIGRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendConfigResponse;

class CreateBackendConfigResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CreateBackendConfigResponsePrivate(CreateBackendConfigResponse * const q);

    void parseCreateBackendConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendConfigResponse)
    Q_DISABLE_COPY(CreateBackendConfigResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
