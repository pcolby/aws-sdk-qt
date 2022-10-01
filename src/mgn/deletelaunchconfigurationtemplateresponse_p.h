// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DeleteLaunchConfigurationTemplateResponse;

class DeleteLaunchConfigurationTemplateResponsePrivate : public MgnResponsePrivate {

public:

    explicit DeleteLaunchConfigurationTemplateResponsePrivate(DeleteLaunchConfigurationTemplateResponse * const q);

    void parseDeleteLaunchConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteLaunchConfigurationTemplateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
