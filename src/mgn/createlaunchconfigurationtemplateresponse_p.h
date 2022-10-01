// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class CreateLaunchConfigurationTemplateResponse;

class CreateLaunchConfigurationTemplateResponsePrivate : public MgnResponsePrivate {

public:

    explicit CreateLaunchConfigurationTemplateResponsePrivate(CreateLaunchConfigurationTemplateResponse * const q);

    void parseCreateLaunchConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateLaunchConfigurationTemplateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
