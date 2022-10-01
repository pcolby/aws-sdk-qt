// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONTARGETRESPONSE_P_H
#define QTAWS_DELETEACTIONTARGETRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DeleteActionTargetResponse;

class DeleteActionTargetResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DeleteActionTargetResponsePrivate(DeleteActionTargetResponse * const q);

    void parseDeleteActionTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteActionTargetResponse)
    Q_DISABLE_COPY(DeleteActionTargetResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
