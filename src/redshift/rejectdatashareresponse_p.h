// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDATASHARERESPONSE_P_H
#define QTAWS_REJECTDATASHARERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RejectDataShareResponse;

class RejectDataShareResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RejectDataShareResponsePrivate(RejectDataShareResponse * const q);

    void parseRejectDataShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectDataShareResponse)
    Q_DISABLE_COPY(RejectDataShareResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
