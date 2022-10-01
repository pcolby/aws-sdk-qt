// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFINDINGSREQUEST_P_H
#define QTAWS_DESCRIBEFINDINGSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describefindingsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeFindingsRequest;

class DescribeFindingsRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeFindingsRequestPrivate(const InspectorRequest::Action action,
                                   DescribeFindingsRequest * const q);
    DescribeFindingsRequestPrivate(const DescribeFindingsRequestPrivate &other,
                                   DescribeFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
