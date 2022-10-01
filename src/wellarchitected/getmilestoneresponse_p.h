// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMILESTONERESPONSE_P_H
#define QTAWS_GETMILESTONERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetMilestoneResponse;

class GetMilestoneResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetMilestoneResponsePrivate(GetMilestoneResponse * const q);

    void parseGetMilestoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMilestoneResponse)
    Q_DISABLE_COPY(GetMilestoneResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
