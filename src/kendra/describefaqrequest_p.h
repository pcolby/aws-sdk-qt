// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFAQREQUEST_P_H
#define QTAWS_DESCRIBEFAQREQUEST_P_H

#include "kendrarequest_p.h"
#include "describefaqrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeFaqRequest;

class DescribeFaqRequestPrivate : public KendraRequestPrivate {

public:
    DescribeFaqRequestPrivate(const KendraRequest::Action action,
                                   DescribeFaqRequest * const q);
    DescribeFaqRequestPrivate(const DescribeFaqRequestPrivate &other,
                                   DescribeFaqRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFaqRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
