// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEPLANRESPONSE_P_H
#define QTAWS_CREATERESPONSEPLANRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class CreateResponsePlanResponse;

class CreateResponsePlanResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit CreateResponsePlanResponsePrivate(CreateResponsePlanResponse * const q);

    void parseCreateResponsePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResponsePlanResponse)
    Q_DISABLE_COPY(CreateResponsePlanResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
