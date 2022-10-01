// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHINFERENCEJOBSRESPONSE_P_H
#define QTAWS_LISTBATCHINFERENCEJOBSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListBatchInferenceJobsResponse;

class ListBatchInferenceJobsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListBatchInferenceJobsResponsePrivate(ListBatchInferenceJobsResponse * const q);

    void parseListBatchInferenceJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBatchInferenceJobsResponse)
    Q_DISABLE_COPY(ListBatchInferenceJobsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
