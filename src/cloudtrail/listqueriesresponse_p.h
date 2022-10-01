// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERIESRESPONSE_P_H
#define QTAWS_LISTQUERIESRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class ListQueriesResponse;

class ListQueriesResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit ListQueriesResponsePrivate(ListQueriesResponse * const q);

    void parseListQueriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueriesResponse)
    Q_DISABLE_COPY(ListQueriesResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
