// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTSECURITYGROUPRESPONSE_P_H
#define QTAWS_DELETEINPUTSECURITYGROUPRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputSecurityGroupResponse;

class DeleteInputSecurityGroupResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DeleteInputSecurityGroupResponsePrivate(DeleteInputSecurityGroupResponse * const q);

    void parseDeleteInputSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInputSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteInputSecurityGroupResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
