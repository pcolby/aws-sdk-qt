// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSIGHTSRESPONSE_P_H
#define QTAWS_LISTINSIGHTSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListInsightsResponse;

class ListInsightsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListInsightsResponsePrivate(ListInsightsResponse * const q);

    void parseListInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInsightsResponse)
    Q_DISABLE_COPY(ListInsightsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
