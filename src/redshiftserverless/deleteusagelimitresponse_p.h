// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITRESPONSE_P_H
#define QTAWS_DELETEUSAGELIMITRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteUsageLimitResponse;

class DeleteUsageLimitResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit DeleteUsageLimitResponsePrivate(DeleteUsageLimitResponse * const q);

    void parseDeleteUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUsageLimitResponse)
    Q_DISABLE_COPY(DeleteUsageLimitResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
