// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGELIMITRESPONSE_P_H
#define QTAWS_GETUSAGELIMITRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetUsageLimitResponse;

class GetUsageLimitResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetUsageLimitResponsePrivate(GetUsageLimitResponse * const q);

    void parseGetUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsageLimitResponse)
    Q_DISABLE_COPY(GetUsageLimitResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
