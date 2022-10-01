// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONTARGETRESPONSE_P_H
#define QTAWS_CREATEACTIONTARGETRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class CreateActionTargetResponse;

class CreateActionTargetResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit CreateActionTargetResponsePrivate(CreateActionTargetResponse * const q);

    void parseCreateActionTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateActionTargetResponse)
    Q_DISABLE_COPY(CreateActionTargetResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
