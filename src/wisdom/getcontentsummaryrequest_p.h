// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTSUMMARYREQUEST_P_H
#define QTAWS_GETCONTENTSUMMARYREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getcontentsummaryrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentSummaryRequest;

class GetContentSummaryRequestPrivate : public WisdomRequestPrivate {

public:
    GetContentSummaryRequestPrivate(const WisdomRequest::Action action,
                                   GetContentSummaryRequest * const q);
    GetContentSummaryRequestPrivate(const GetContentSummaryRequestPrivate &other,
                                   GetContentSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContentSummaryRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
