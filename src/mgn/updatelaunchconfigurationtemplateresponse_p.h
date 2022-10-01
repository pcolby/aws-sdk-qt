// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class UpdateLaunchConfigurationTemplateResponse;

class UpdateLaunchConfigurationTemplateResponsePrivate : public MgnResponsePrivate {

public:

    explicit UpdateLaunchConfigurationTemplateResponsePrivate(UpdateLaunchConfigurationTemplateResponse * const q);

    void parseUpdateLaunchConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateLaunchConfigurationTemplateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
