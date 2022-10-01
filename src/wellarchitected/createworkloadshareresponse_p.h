// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADSHARERESPONSE_P_H
#define QTAWS_CREATEWORKLOADSHARERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadShareResponse;

class CreateWorkloadShareResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit CreateWorkloadShareResponsePrivate(CreateWorkloadShareResponse * const q);

    void parseCreateWorkloadShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkloadShareResponse)
    Q_DISABLE_COPY(CreateWorkloadShareResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
