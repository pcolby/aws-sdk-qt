// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUGGESTREQUEST_P_H
#define QTAWS_SUGGESTREQUEST_P_H

#include "cloudsearchdomainrequest_p.h"
#include "suggestrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class SuggestRequest;

class SuggestRequestPrivate : public CloudSearchDomainRequestPrivate {

public:
    SuggestRequestPrivate(const CloudSearchDomainRequest::Action action,
                                   SuggestRequest * const q);
    SuggestRequestPrivate(const SuggestRequestPrivate &other,
                                   SuggestRequest * const q);

private:
    Q_DECLARE_PUBLIC(SuggestRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
