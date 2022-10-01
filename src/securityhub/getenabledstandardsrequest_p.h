// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENABLEDSTANDARDSREQUEST_P_H
#define QTAWS_GETENABLEDSTANDARDSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getenabledstandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetEnabledStandardsRequest;

class GetEnabledStandardsRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetEnabledStandardsRequestPrivate(const SecurityHubRequest::Action action,
                                   GetEnabledStandardsRequest * const q);
    GetEnabledStandardsRequestPrivate(const GetEnabledStandardsRequestPrivate &other,
                                   GetEnabledStandardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnabledStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
