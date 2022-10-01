// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILETIMESRESPONSE_P_H
#define QTAWS_LISTPROFILETIMESRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfileTimesResponse;

class ListProfileTimesResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit ListProfileTimesResponsePrivate(ListProfileTimesResponse * const q);

    void parseListProfileTimesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfileTimesResponse)
    Q_DISABLE_COPY(ListProfileTimesResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
