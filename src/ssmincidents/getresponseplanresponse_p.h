// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEPLANRESPONSE_P_H
#define QTAWS_GETRESPONSEPLANRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class GetResponsePlanResponse;

class GetResponsePlanResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit GetResponsePlanResponsePrivate(GetResponsePlanResponse * const q);

    void parseGetResponsePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResponsePlanResponse)
    Q_DISABLE_COPY(GetResponsePlanResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
