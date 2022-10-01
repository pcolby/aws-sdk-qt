// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_P_H
#define QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListReviewPolicyResultsForHITResponse;

class ListReviewPolicyResultsForHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListReviewPolicyResultsForHITResponsePrivate(ListReviewPolicyResultsForHITResponse * const q);

    void parseListReviewPolicyResultsForHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReviewPolicyResultsForHITResponse)
    Q_DISABLE_COPY(ListReviewPolicyResultsForHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
