// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELENSREVIEWRESPONSE_P_H
#define QTAWS_UPDATELENSREVIEWRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateLensReviewResponse;

class UpdateLensReviewResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateLensReviewResponsePrivate(UpdateLensReviewResponse * const q);

    void parseUpdateLensReviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLensReviewResponse)
    Q_DISABLE_COPY(UpdateLensReviewResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
