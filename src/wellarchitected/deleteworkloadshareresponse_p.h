// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADSHARERESPONSE_P_H
#define QTAWS_DELETEWORKLOADSHARERESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadShareResponse;

class DeleteWorkloadShareResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit DeleteWorkloadShareResponsePrivate(DeleteWorkloadShareResponse * const q);

    void parseDeleteWorkloadShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkloadShareResponse)
    Q_DISABLE_COPY(DeleteWorkloadShareResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
