// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_CREATESCHEDULEDACTIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateScheduledActionResponse;

class CreateScheduledActionResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateScheduledActionResponsePrivate(CreateScheduledActionResponse * const q);

    void parseCreateScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScheduledActionResponse)
    Q_DISABLE_COPY(CreateScheduledActionResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
