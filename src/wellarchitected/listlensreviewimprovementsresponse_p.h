// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWIMPROVEMENTSRESPONSE_P_H
#define QTAWS_LISTLENSREVIEWIMPROVEMENTSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewImprovementsResponse;

class ListLensReviewImprovementsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListLensReviewImprovementsResponsePrivate(ListLensReviewImprovementsResponse * const q);

    void parseListLensReviewImprovementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLensReviewImprovementsResponse)
    Q_DISABLE_COPY(ListLensReviewImprovementsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
