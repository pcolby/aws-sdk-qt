// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECASESREQUEST_P_H
#define QTAWS_DESCRIBECASESREQUEST_P_H

#include "supportrequest_p.h"
#include "describecasesrequest.h"

namespace QtAws {
namespace Support {

class DescribeCasesRequest;

class DescribeCasesRequestPrivate : public SupportRequestPrivate {

public:
    DescribeCasesRequestPrivate(const SupportRequest::Action action,
                                   DescribeCasesRequest * const q);
    DescribeCasesRequestPrivate(const DescribeCasesRequestPrivate &other,
                                   DescribeCasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCasesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
