// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYGENERATIONSREQUEST_P_H
#define QTAWS_LISTPOLICYGENERATIONSREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listpolicygenerationsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListPolicyGenerationsRequest;

class ListPolicyGenerationsRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListPolicyGenerationsRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListPolicyGenerationsRequest * const q);
    ListPolicyGenerationsRequestPrivate(const ListPolicyGenerationsRequestPrivate &other,
                                   ListPolicyGenerationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPolicyGenerationsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
