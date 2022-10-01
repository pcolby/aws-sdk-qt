// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class UpdateLaunchConfigurationResponse;

class UpdateLaunchConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit UpdateLaunchConfigurationResponsePrivate(UpdateLaunchConfigurationResponse * const q);

    void parseUpdateLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchConfigurationResponse)
    Q_DISABLE_COPY(UpdateLaunchConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
