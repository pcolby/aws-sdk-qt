// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETRESPONSE_P_H
#define QTAWS_DELETETARGETRESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteTargetResponse;

class DeleteTargetResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit DeleteTargetResponsePrivate(DeleteTargetResponse * const q);

    void parseDeleteTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTargetResponse)
    Q_DISABLE_COPY(DeleteTargetResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
