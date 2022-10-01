// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSAGELIMITRESPONSE_P_H
#define QTAWS_MODIFYUSAGELIMITRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyUsageLimitResponse;

class ModifyUsageLimitResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyUsageLimitResponsePrivate(ModifyUsageLimitResponse * const q);

    void parseModifyUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyUsageLimitResponse)
    Q_DISABLE_COPY(ModifyUsageLimitResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
