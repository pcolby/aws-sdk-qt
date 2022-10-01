// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZEDRESOURCEREQUEST_P_H
#define QTAWS_GETANALYZEDRESOURCEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getanalyzedresourcerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzedResourceRequest;

class GetAnalyzedResourceRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetAnalyzedResourceRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetAnalyzedResourceRequest * const q);
    GetAnalyzedResourceRequestPrivate(const GetAnalyzedResourceRequestPrivate &other,
                                   GetAnalyzedResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnalyzedResourceRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
