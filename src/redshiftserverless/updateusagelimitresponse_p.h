// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGELIMITRESPONSE_P_H
#define QTAWS_UPDATEUSAGELIMITRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateUsageLimitResponse;

class UpdateUsageLimitResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit UpdateUsageLimitResponsePrivate(UpdateUsageLimitResponse * const q);

    void parseUpdateUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUsageLimitResponse)
    Q_DISABLE_COPY(UpdateUsageLimitResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
