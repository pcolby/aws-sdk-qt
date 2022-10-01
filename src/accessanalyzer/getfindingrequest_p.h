// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGREQUEST_P_H
#define QTAWS_GETFINDINGREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getfindingrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetFindingRequest;

class GetFindingRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetFindingRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetFindingRequest * const q);
    GetFindingRequestPrivate(const GetFindingRequestPrivate &other,
                                   GetFindingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
