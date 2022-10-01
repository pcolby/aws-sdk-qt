// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTNAMESUGGESTIONREQUEST_P_H
#define QTAWS_GETHOSTNAMESUGGESTIONREQUEST_P_H

#include "opsworksrequest_p.h"
#include "gethostnamesuggestionrequest.h"

namespace QtAws {
namespace OpsWorks {

class GetHostnameSuggestionRequest;

class GetHostnameSuggestionRequestPrivate : public OpsWorksRequestPrivate {

public:
    GetHostnameSuggestionRequestPrivate(const OpsWorksRequest::Action action,
                                   GetHostnameSuggestionRequest * const q);
    GetHostnameSuggestionRequestPrivate(const GetHostnameSuggestionRequestPrivate &other,
                                   GetHostnameSuggestionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostnameSuggestionRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
