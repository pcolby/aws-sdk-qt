// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITRESPONSE_P_H
#define QTAWS_CREATEUSAGELIMITRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateUsageLimitResponse;

class CreateUsageLimitResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateUsageLimitResponsePrivate(CreateUsageLimitResponse * const q);

    void parseCreateUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUsageLimitResponse)
    Q_DISABLE_COPY(CreateUsageLimitResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
