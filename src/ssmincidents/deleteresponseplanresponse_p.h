// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEPLANRESPONSE_P_H
#define QTAWS_DELETERESPONSEPLANRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteResponsePlanResponse;

class DeleteResponsePlanResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit DeleteResponsePlanResponsePrivate(DeleteResponsePlanResponse * const q);

    void parseDeleteResponsePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResponsePlanResponse)
    Q_DISABLE_COPY(DeleteResponsePlanResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
