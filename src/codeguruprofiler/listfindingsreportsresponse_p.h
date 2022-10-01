// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREPORTSRESPONSE_P_H
#define QTAWS_LISTFINDINGSREPORTSRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListFindingsReportsResponse;

class ListFindingsReportsResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit ListFindingsReportsResponsePrivate(ListFindingsReportsResponse * const q);

    void parseListFindingsReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFindingsReportsResponse)
    Q_DISABLE_COPY(ListFindingsReportsResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
