// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTICD10CMINFERENCEJOBSRESPONSE_P_H
#define QTAWS_LISTICD10CMINFERENCEJOBSRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class ListICD10CMInferenceJobsResponse;

class ListICD10CMInferenceJobsResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit ListICD10CMInferenceJobsResponsePrivate(ListICD10CMInferenceJobsResponse * const q);

    void parseListICD10CMInferenceJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListICD10CMInferenceJobsResponse)
    Q_DISABLE_COPY(ListICD10CMInferenceJobsResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
