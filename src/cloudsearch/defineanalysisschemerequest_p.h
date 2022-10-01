// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEANALYSISSCHEMEREQUEST_P_H
#define QTAWS_DEFINEANALYSISSCHEMEREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "defineanalysisschemerequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineAnalysisSchemeRequest;

class DefineAnalysisSchemeRequestPrivate : public CloudSearchRequestPrivate {

public:
    DefineAnalysisSchemeRequestPrivate(const CloudSearchRequest::Action action,
                                   DefineAnalysisSchemeRequest * const q);
    DefineAnalysisSchemeRequestPrivate(const DefineAnalysisSchemeRequestPrivate &other,
                                   DefineAnalysisSchemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DefineAnalysisSchemeRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
