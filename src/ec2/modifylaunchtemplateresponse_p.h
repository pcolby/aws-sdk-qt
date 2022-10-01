// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLAUNCHTEMPLATERESPONSE_P_H
#define QTAWS_MODIFYLAUNCHTEMPLATERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyLaunchTemplateResponse;

class ModifyLaunchTemplateResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyLaunchTemplateResponsePrivate(ModifyLaunchTemplateResponse * const q);

    void parseModifyLaunchTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyLaunchTemplateResponse)
    Q_DISABLE_COPY(ModifyLaunchTemplateResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
