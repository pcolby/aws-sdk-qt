// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONV2JOBSRESPONSE_P_H
#define QTAWS_LISTENTITIESDETECTIONV2JOBSRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class ListEntitiesDetectionV2JobsResponse;

class ListEntitiesDetectionV2JobsResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit ListEntitiesDetectionV2JobsResponsePrivate(ListEntitiesDetectionV2JobsResponse * const q);

    void parseListEntitiesDetectionV2JobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitiesDetectionV2JobsResponse)
    Q_DISABLE_COPY(ListEntitiesDetectionV2JobsResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
