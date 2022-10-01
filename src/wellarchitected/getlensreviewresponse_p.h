// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWRESPONSE_P_H
#define QTAWS_GETLENSREVIEWRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewResponse;

class GetLensReviewResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit GetLensReviewResponsePrivate(GetLensReviewResponse * const q);

    void parseGetLensReviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLensReviewResponse)
    Q_DISABLE_COPY(GetLensReviewResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
