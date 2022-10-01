// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHSEGMENTJOBSRESPONSE_P_H
#define QTAWS_LISTBATCHSEGMENTJOBSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListBatchSegmentJobsResponse;

class ListBatchSegmentJobsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListBatchSegmentJobsResponsePrivate(ListBatchSegmentJobsResponse * const q);

    void parseListBatchSegmentJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBatchSegmentJobsResponse)
    Q_DISABLE_COPY(ListBatchSegmentJobsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
