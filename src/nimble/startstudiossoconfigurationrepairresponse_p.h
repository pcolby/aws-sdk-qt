// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRRESPONSE_P_H
#define QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class StartStudioSSOConfigurationRepairResponse;

class StartStudioSSOConfigurationRepairResponsePrivate : public NimbleResponsePrivate {

public:

    explicit StartStudioSSOConfigurationRepairResponsePrivate(StartStudioSSOConfigurationRepairResponse * const q);

    void parseStartStudioSSOConfigurationRepairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStudioSSOConfigurationRepairResponse)
    Q_DISABLE_COPY(StartStudioSSOConfigurationRepairResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
