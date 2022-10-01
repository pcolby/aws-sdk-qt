// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMILESTONERESPONSE_P_H
#define QTAWS_CREATEMILESTONERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class CreateMilestoneResponse;

class CreateMilestoneResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit CreateMilestoneResponsePrivate(CreateMilestoneResponse * const q);

    void parseCreateMilestoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMilestoneResponse)
    Q_DISABLE_COPY(CreateMilestoneResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
