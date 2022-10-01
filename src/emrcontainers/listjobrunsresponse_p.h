// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSRESPONSE_P_H
#define QTAWS_LISTJOBRUNSRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class ListJobRunsResponse;

class ListJobRunsResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit ListJobRunsResponsePrivate(ListJobRunsResponse * const q);

    void parseListJobRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobRunsResponse)
    Q_DISABLE_COPY(ListJobRunsResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
