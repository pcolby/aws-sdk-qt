// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGINGJOBSRESPONSE_P_H
#define QTAWS_LISTMODELPACKAGINGJOBSRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class ListModelPackagingJobsResponse;

class ListModelPackagingJobsResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit ListModelPackagingJobsResponsePrivate(ListModelPackagingJobsResponse * const q);

    void parseListModelPackagingJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelPackagingJobsResponse)
    Q_DISABLE_COPY(ListModelPackagingJobsResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
