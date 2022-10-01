// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRXNORMINFERENCEJOBSRESPONSE_P_H
#define QTAWS_LISTRXNORMINFERENCEJOBSRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class ListRxNormInferenceJobsResponse;

class ListRxNormInferenceJobsResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit ListRxNormInferenceJobsResponsePrivate(ListRxNormInferenceJobsResponse * const q);

    void parseListRxNormInferenceJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRxNormInferenceJobsResponse)
    Q_DISABLE_COPY(ListRxNormInferenceJobsResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
