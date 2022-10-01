// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADELENSREVIEWREQUEST_P_H
#define QTAWS_UPGRADELENSREVIEWREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "upgradelensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpgradeLensReviewRequest;

class UpgradeLensReviewRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpgradeLensReviewRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpgradeLensReviewRequest * const q);
    UpgradeLensReviewRequestPrivate(const UpgradeLensReviewRequestPrivate &other,
                                   UpgradeLensReviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpgradeLensReviewRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
