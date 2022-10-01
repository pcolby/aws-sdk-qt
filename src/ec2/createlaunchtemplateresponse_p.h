// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATERESPONSE_P_H
#define QTAWS_CREATELAUNCHTEMPLATERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateResponse;

class CreateLaunchTemplateResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateLaunchTemplateResponsePrivate(CreateLaunchTemplateResponse * const q);

    void parseCreateLaunchTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchTemplateResponse)
    Q_DISABLE_COPY(CreateLaunchTemplateResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
