// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSECURITYGROUPSRESPONSE_P_H
#define QTAWS_LISTINPUTSECURITYGROUPSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListInputSecurityGroupsResponse;

class ListInputSecurityGroupsResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListInputSecurityGroupsResponsePrivate(ListInputSecurityGroupsResponse * const q);

    void parseListInputSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInputSecurityGroupsResponse)
    Q_DISABLE_COPY(ListInputSecurityGroupsResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
