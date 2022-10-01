// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMLJOBSRESPONSE_P_H
#define QTAWS_LISTAUTOMLJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListAutoMLJobsResponse;

class ListAutoMLJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListAutoMLJobsResponsePrivate(ListAutoMLJobsResponse * const q);

    void parseListAutoMLJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAutoMLJobsResponse)
    Q_DISABLE_COPY(ListAutoMLJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
