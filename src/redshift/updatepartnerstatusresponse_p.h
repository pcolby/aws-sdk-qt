// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERSTATUSRESPONSE_P_H
#define QTAWS_UPDATEPARTNERSTATUSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class UpdatePartnerStatusResponse;

class UpdatePartnerStatusResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit UpdatePartnerStatusResponsePrivate(UpdatePartnerStatusResponse * const q);

    void parseUpdatePartnerStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePartnerStatusResponse)
    Q_DISABLE_COPY(UpdatePartnerStatusResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
