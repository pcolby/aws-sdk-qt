// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHTEMPLATEDATARESPONSE_P_H
#define QTAWS_GETLAUNCHTEMPLATEDATARESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetLaunchTemplateDataResponse;

class GetLaunchTemplateDataResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetLaunchTemplateDataResponsePrivate(GetLaunchTemplateDataResponse * const q);

    void parseGetLaunchTemplateDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLaunchTemplateDataResponse)
    Q_DISABLE_COPY(GetLaunchTemplateDataResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
