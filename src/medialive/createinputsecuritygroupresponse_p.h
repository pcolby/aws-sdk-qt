// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTSECURITYGROUPRESPONSE_P_H
#define QTAWS_CREATEINPUTSECURITYGROUPRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CreateInputSecurityGroupResponse;

class CreateInputSecurityGroupResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CreateInputSecurityGroupResponsePrivate(CreateInputSecurityGroupResponse * const q);

    void parseCreateInputSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInputSecurityGroupResponse)
    Q_DISABLE_COPY(CreateInputSecurityGroupResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
