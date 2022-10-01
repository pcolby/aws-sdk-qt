// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKLOADRESPONSE_P_H
#define QTAWS_GETWORKLOADRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetWorkloadResponse;

class GetWorkloadResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetWorkloadResponsePrivate(GetWorkloadResponse * const q);

    void parseGetWorkloadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkloadResponse)
    Q_DISABLE_COPY(GetWorkloadResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
