// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATERESPONSE_P_H
#define QTAWS_DELETELAUNCHTEMPLATERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateResponse;

class DeleteLaunchTemplateResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteLaunchTemplateResponsePrivate(DeleteLaunchTemplateResponse * const q);

    void parseDeleteLaunchTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchTemplateResponse)
    Q_DISABLE_COPY(DeleteLaunchTemplateResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
