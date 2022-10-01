// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALOUSLOGGROUPSRESPONSE_P_H
#define QTAWS_LISTANOMALOUSLOGGROUPSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomalousLogGroupsResponse;

class ListAnomalousLogGroupsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListAnomalousLogGroupsResponsePrivate(ListAnomalousLogGroupsResponse * const q);

    void parseListAnomalousLogGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomalousLogGroupsResponse)
    Q_DISABLE_COPY(ListAnomalousLogGroupsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
