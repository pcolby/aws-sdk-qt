// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADELENSREVIEWRESPONSE_P_H
#define QTAWS_UPGRADELENSREVIEWRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpgradeLensReviewResponse;

class UpgradeLensReviewResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpgradeLensReviewResponsePrivate(UpgradeLensReviewResponse * const q);

    void parseUpgradeLensReviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpgradeLensReviewResponse)
    Q_DISABLE_COPY(UpgradeLensReviewResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
