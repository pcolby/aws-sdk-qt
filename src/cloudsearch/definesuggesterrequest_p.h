// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINESUGGESTERREQUEST_P_H
#define QTAWS_DEFINESUGGESTERREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "definesuggesterrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineSuggesterRequest;

class DefineSuggesterRequestPrivate : public CloudSearchRequestPrivate {

public:
    DefineSuggesterRequestPrivate(const CloudSearchRequest::Action action,
                                   DefineSuggesterRequest * const q);
    DefineSuggesterRequestPrivate(const DefineSuggesterRequestPrivate &other,
                                   DefineSuggesterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DefineSuggesterRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
