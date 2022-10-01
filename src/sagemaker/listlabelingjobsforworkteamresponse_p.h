// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSFORWORKTEAMRESPONSE_P_H
#define QTAWS_LISTLABELINGJOBSFORWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsForWorkteamResponse;

class ListLabelingJobsForWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListLabelingJobsForWorkteamResponsePrivate(ListLabelingJobsForWorkteamResponse * const q);

    void parseListLabelingJobsForWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLabelingJobsForWorkteamResponse)
    Q_DISABLE_COPY(ListLabelingJobsForWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
