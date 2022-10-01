// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADRESPONSE_P_H
#define QTAWS_UPDATEWORKLOADRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadResponse;

class UpdateWorkloadResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateWorkloadResponsePrivate(UpdateWorkloadResponse * const q);

    void parseUpdateWorkloadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkloadResponse)
    Q_DISABLE_COPY(UpdateWorkloadResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
