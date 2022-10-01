// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGELIMITSRESPONSE_P_H
#define QTAWS_LISTUSAGELIMITSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListUsageLimitsResponse;

class ListUsageLimitsResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListUsageLimitsResponsePrivate(ListUsageLimitsResponse * const q);

    void parseListUsageLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsageLimitsResponse)
    Q_DISABLE_COPY(ListUsageLimitsResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
