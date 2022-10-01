// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEPLANRESPONSE_P_H
#define QTAWS_UPDATERESPONSEPLANRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateResponsePlanResponse;

class UpdateResponsePlanResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateResponsePlanResponsePrivate(UpdateResponsePlanResponse * const q);

    void parseUpdateResponsePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResponsePlanResponse)
    Q_DISABLE_COPY(UpdateResponsePlanResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
