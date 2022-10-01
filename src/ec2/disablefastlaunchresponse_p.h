// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTLAUNCHRESPONSE_P_H
#define QTAWS_DISABLEFASTLAUNCHRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableFastLaunchResponse;

class DisableFastLaunchResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableFastLaunchResponsePrivate(DisableFastLaunchResponse * const q);

    void parseDisableFastLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableFastLaunchResponse)
    Q_DISABLE_COPY(DisableFastLaunchResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
