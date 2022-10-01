// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWABLEHITSRESPONSE_P_H
#define QTAWS_LISTREVIEWABLEHITSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListReviewableHITsResponse;

class ListReviewableHITsResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListReviewableHITsResponsePrivate(ListReviewableHITsResponse * const q);

    void parseListReviewableHITsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReviewableHITsResponse)
    Q_DISABLE_COPY(ListReviewableHITsResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
