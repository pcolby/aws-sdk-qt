// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETLAUNCHCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class GetLaunchConfigurationResponse;

class GetLaunchConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit GetLaunchConfigurationResponsePrivate(GetLaunchConfigurationResponse * const q);

    void parseGetLaunchConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchConfigurationResponse)
    Q_DISABLE_COPY(GetLaunchConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
