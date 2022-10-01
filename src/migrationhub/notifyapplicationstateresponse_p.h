// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPLICATIONSTATERESPONSE_P_H
#define QTAWS_NOTIFYAPPLICATIONSTATERESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class NotifyApplicationStateResponse;

class NotifyApplicationStateResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit NotifyApplicationStateResponsePrivate(NotifyApplicationStateResponse * const q);

    void parseNotifyApplicationStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyApplicationStateResponse)
    Q_DISABLE_COPY(NotifyApplicationStateResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
