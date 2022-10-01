// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESEVERITYLEVELSREQUEST_P_H
#define QTAWS_DESCRIBESEVERITYLEVELSREQUEST_P_H

#include "supportrequest_p.h"
#include "describeseveritylevelsrequest.h"

namespace QtAws {
namespace Support {

class DescribeSeverityLevelsRequest;

class DescribeSeverityLevelsRequestPrivate : public SupportRequestPrivate {

public:
    DescribeSeverityLevelsRequestPrivate(const SupportRequest::Action action,
                                   DescribeSeverityLevelsRequest * const q);
    DescribeSeverityLevelsRequestPrivate(const DescribeSeverityLevelsRequestPrivate &other,
                                   DescribeSeverityLevelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSeverityLevelsRequest)

};

} // namespace Support
} // namespace QtAws

#endif
