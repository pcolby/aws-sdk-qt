// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTSECURITYGROUPRESPONSE_P_H
#define QTAWS_UPDATEINPUTSECURITYGROUPRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputSecurityGroupResponse;

class UpdateInputSecurityGroupResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateInputSecurityGroupResponsePrivate(UpdateInputSecurityGroupResponse * const q);

    void parseUpdateInputSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInputSecurityGroupResponse)
    Q_DISABLE_COPY(UpdateInputSecurityGroupResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
