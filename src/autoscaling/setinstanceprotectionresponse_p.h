// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEPROTECTIONRESPONSE_P_H
#define QTAWS_SETINSTANCEPROTECTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceProtectionResponse;

class SetInstanceProtectionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit SetInstanceProtectionResponsePrivate(SetInstanceProtectionResponse * const q);

    void parseSetInstanceProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetInstanceProtectionResponse)
    Q_DISABLE_COPY(SetInstanceProtectionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
