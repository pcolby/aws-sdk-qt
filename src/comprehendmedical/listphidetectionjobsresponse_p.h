// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHIDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTPHIDETECTIONJOBSRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class ListPHIDetectionJobsResponse;

class ListPHIDetectionJobsResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit ListPHIDetectionJobsResponsePrivate(ListPHIDetectionJobsResponse * const q);

    void parseListPHIDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPHIDetectionJobsResponse)
    Q_DISABLE_COPY(ListPHIDetectionJobsResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
