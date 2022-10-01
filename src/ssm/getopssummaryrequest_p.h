// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSSUMMARYREQUEST_P_H
#define QTAWS_GETOPSSUMMARYREQUEST_P_H

#include "ssmrequest_p.h"
#include "getopssummaryrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsSummaryRequest;

class GetOpsSummaryRequestPrivate : public SsmRequestPrivate {

public:
    GetOpsSummaryRequestPrivate(const SsmRequest::Action action,
                                   GetOpsSummaryRequest * const q);
    GetOpsSummaryRequestPrivate(const GetOpsSummaryRequestPrivate &other,
                                   GetOpsSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpsSummaryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
