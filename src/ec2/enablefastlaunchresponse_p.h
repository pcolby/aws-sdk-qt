// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTLAUNCHRESPONSE_P_H
#define QTAWS_ENABLEFASTLAUNCHRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableFastLaunchResponse;

class EnableFastLaunchResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableFastLaunchResponsePrivate(EnableFastLaunchResponse * const q);

    void parseEnableFastLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableFastLaunchResponse)
    Q_DISABLE_COPY(EnableFastLaunchResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
