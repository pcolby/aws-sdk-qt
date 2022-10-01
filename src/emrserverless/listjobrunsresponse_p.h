// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSRESPONSE_P_H
#define QTAWS_LISTJOBRUNSRESPONSE_P_H

#include "emrserverlessresponse_p.h"

namespace QtAws {
namespace EmrServerless {

class ListJobRunsResponse;

class ListJobRunsResponsePrivate : public EmrServerlessResponsePrivate {

public:

    explicit ListJobRunsResponsePrivate(ListJobRunsResponse * const q);

    void parseListJobRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobRunsResponse)
    Q_DISABLE_COPY(ListJobRunsResponsePrivate)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
