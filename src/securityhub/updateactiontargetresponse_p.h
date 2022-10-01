// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTARGETRESPONSE_P_H
#define QTAWS_UPDATEACTIONTARGETRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateActionTargetResponse;

class UpdateActionTargetResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateActionTargetResponsePrivate(UpdateActionTargetResponse * const q);

    void parseUpdateActionTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateActionTargetResponse)
    Q_DISABLE_COPY(UpdateActionTargetResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
