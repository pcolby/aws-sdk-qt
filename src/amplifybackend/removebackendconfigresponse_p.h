// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEBACKENDCONFIGRESPONSE_P_H
#define QTAWS_REMOVEBACKENDCONFIGRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveBackendConfigResponse;

class RemoveBackendConfigResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit RemoveBackendConfigResponsePrivate(RemoveBackendConfigResponse * const q);

    void parseRemoveBackendConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveBackendConfigResponse)
    Q_DISABLE_COPY(RemoveBackendConfigResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
