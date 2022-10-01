// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWSRESPONSE_P_H
#define QTAWS_LISTLENSREVIEWSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewsResponse;

class ListLensReviewsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListLensReviewsResponsePrivate(ListLensReviewsResponse * const q);

    void parseListLensReviewsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLensReviewsResponse)
    Q_DISABLE_COPY(ListLensReviewsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
