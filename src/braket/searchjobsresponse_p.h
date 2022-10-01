// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHJOBSRESPONSE_P_H
#define QTAWS_SEARCHJOBSRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class SearchJobsResponse;

class SearchJobsResponsePrivate : public BraketResponsePrivate {

public:

    explicit SearchJobsResponsePrivate(SearchJobsResponse * const q);

    void parseSearchJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchJobsResponse)
    Q_DISABLE_COPY(SearchJobsResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
