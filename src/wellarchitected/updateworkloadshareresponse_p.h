// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADSHARERESPONSE_P_H
#define QTAWS_UPDATEWORKLOADSHARERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadShareResponse;

class UpdateWorkloadShareResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateWorkloadShareResponsePrivate(UpdateWorkloadShareResponse * const q);

    void parseUpdateWorkloadShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkloadShareResponse)
    Q_DISABLE_COPY(UpdateWorkloadShareResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
