// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITRESPONSE_P_H
#define QTAWS_DELETEUSAGELIMITRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteUsageLimitResponse;

class DeleteUsageLimitResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteUsageLimitResponsePrivate(DeleteUsageLimitResponse * const q);

    void parseDeleteUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUsageLimitResponse)
    Q_DISABLE_COPY(DeleteUsageLimitResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
