// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLREQUESTEVENTSRESPONSE_P_H
#define QTAWS_DESCRIBEPULLREQUESTEVENTSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DescribePullRequestEventsResponse;

class DescribePullRequestEventsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DescribePullRequestEventsResponsePrivate(DescribePullRequestEventsResponse * const q);

    void parseDescribePullRequestEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePullRequestEventsResponse)
    Q_DISABLE_COPY(DescribePullRequestEventsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
