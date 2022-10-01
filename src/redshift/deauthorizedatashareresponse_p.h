// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZEDATASHARERESPONSE_P_H
#define QTAWS_DEAUTHORIZEDATASHARERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeauthorizeDataShareResponse;

class DeauthorizeDataShareResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeauthorizeDataShareResponsePrivate(DeauthorizeDataShareResponse * const q);

    void parseDeauthorizeDataShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeauthorizeDataShareResponse)
    Q_DISABLE_COPY(DeauthorizeDataShareResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
